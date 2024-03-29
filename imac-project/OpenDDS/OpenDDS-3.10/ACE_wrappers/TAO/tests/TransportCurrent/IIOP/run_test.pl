eval '(exit $?0)' && eval 'exec perl -S $0 ${1+"$@"}'
     & eval 'exec perl -S $0 $argv:q'
     if 0;

# $Id: run_test.pl 1861 2011-08-31 16:18:08Z mesnierp $
# -*- perl -*-

use lib "$ENV{ACE_ROOT}/bin";
use Config;
use PerlACE::TestTarget;

my $server = PerlACE::TestTarget::create_target (1) || die "Create target 1 failed\n";
my $client = PerlACE::TestTarget::create_target (2) || die "Create target 2 failed\n";

$server->AddLibPath ('../lib');
$client->AddLibPath ('../lib');

my $iorbase = "server.ior";
my $server_iorfile = $server->LocalFile ($iorbase);
my $client_iorfile = $client->LocalFile ($iorbase);
$server->DeleteFile($iorbase);
$client->DeleteFile($iorbase);

$status = 0;

$mode = shift (@ARGV);
if ( $mode =~ /-dynamic/) {
    $base_client_conf = "client_dynamic.conf";
    $base_server_conf = "server_dynamic.conf";
    $client_conf_file = $client->LocalFile ("$base_client_conf");
    $server_conf_file = $server->LocalFile ("$base_server_conf");
}
elsif  ( $mode =~ /-static/) {
    $base_client_conf = "client_static.conf";
    $base_server_conf = "server_static.conf";
    $client_conf_file = $client->LocalFile ("$base_client_conf");
    $server_conf_file = $server->LocalFile ("$base_server_conf");
}
else {
    print STDERR "Unknown $mode. Specify -static or -dynamic\n";
    exit 1;
}

$SV = $server->CreateProcess ("server",
                              "@ARGV -c 0 -ORBSvcConf $server_conf_file -o $server_iorfile");

$CL = $client->CreateProcess ("client",
                              "@ARGV -n 1 -ORBSvcConf $client_conf_file -k file://$client_iorfile");

print STDERR $SV->CommandLine()."\n";
$SV->Spawn ();

if ($server->WaitForFileTimed ($iorbase,
                               $server->ProcessStartWaitInterval()) == -1) {
    print STDERR "ERROR: cannot find file <$server_iorfile>\n";
    $SV->Kill (); $SV->TimedWait (1);
    exit 1;
}

print STDERR $CL->CommandLine()."\n";
$client_status = $CL->SpawnWaitKill ($client->ProcessStartWaitInterval ());

if ($client_status != 0) {
    print STDERR "$0: ERROR: client returned $client_status\n";
    $status = 1;
}

$server_status = $SV->WaitKill ($server->ProcessStopWaitInterval ());

if ($server_status != 0) {
    print STDERR "$0: ERROR: server returned $server_status\n";
    $status = 1;
}

$server->DeleteFile($iorbase);
$client->DeleteFile($iorbase);

exit $status;
