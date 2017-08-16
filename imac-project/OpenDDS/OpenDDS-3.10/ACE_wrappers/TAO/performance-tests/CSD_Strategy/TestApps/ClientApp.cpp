// $Id: ClientApp.cpp 1861 2011-08-31 16:18:08Z mesnierp $
#include "ClientApp.h"
#include "TestInf/AppHelper.h"
#include "TestInf/TestAppExceptionC.h"
#include "TestServant/Foo_ClientEngine.h"
#include "ace/Get_Opt.h"


ClientApp::ClientApp()
  : TestAppBase("CSD_PT_ClientApp"),
    ior_(ACE_TEXT("Not Set")),
    client_id_(0),
    num_loops_(1)
{
}


ClientApp::~ClientApp()
{
}


int
ClientApp::run_i(int argc, ACE_TCHAR* argv[])
{
  int result = this->init(argc, argv);
  if (result != 0)
    {
      return result;
    }

  this->client_setup();

  result = this->run_engine();

  this->cleanup();
  return result;
}


int
ClientApp::init(int argc, ACE_TCHAR* argv[])
{
  this->orb_ = CORBA::ORB_init(argc, argv);

  // Parse the command-line args for this application.
  // * Returns -1 if problems are encountered.
  // * Returns 1 if the usage statement was explicitly requested.
  // * Returns 0 otherwise.
  return this->parse_args(argc, argv);
}


void
ClientApp::client_setup(void)
{
  // Turn the ior_ into a Foo obj ref.
  Foo_var foo = RefHelper<Foo>::string_to_ref(this->orb_.in(),
                                              this->ior_.c_str());

  // Create the ClientEngine object, and give it the Foo obj ref.
  this->engine_ = new Foo_ClientEngine(foo.in(), this->client_id_);
}


int
ClientApp::run_engine(void)
{
  bool result = this->engine_->execute(this->num_loops_);
  return result ? 0 : -1;
}


void
ClientApp::cleanup()
{
}


int
ClientApp::parse_args(int argc, ACE_TCHAR* argv[])
{
  this->exe_name_ = argv[0];

  ACE_Get_Opt get_opts(argc, argv, ACE_TEXT("i:n:l:"));

  int c;

  while ((c = get_opts()) != -1)
    {
      int result = 0;
      switch (c)
      {
        case 'i':
          this->ior_ = get_opts.opt_arg();
          break;

        case 'n':
          result = this->set_arg(this->client_id_,
                        get_opts.opt_arg(),
                        c,
                        "client_id",
                        1);
          break;

        case 'l':
          result = this->set_arg(this->num_loops_,
                        get_opts.opt_arg(),
                        c,
                        "num_loops",
                        1);
          break;

        case '?':
          this->usage_statement();
          return 1;

        default:
          this->usage_statement();
          return -1;
      }

      if (result != 0)
        {
          return result;
        }
    }

  return this->arg_dependency_checks();
}

void
ClientApp::usage_statement()
{
  ACE_ERROR((LM_ERROR,
             "Usage:  %s [options]\n\n"
             "OPTIONS:\n\n"
             "\t[-i <ior>]\n"
             "\t[-n <client_id>]\n"
             "\t[-l <num_loops>]\n"
             "\t[-?]\n\n",
             this->exe_name_.c_str()));
}


int
ClientApp::arg_dependency_checks()
{
  if (this->ior_ == ACE_TEXT("Not Set"))
    {
      ACE_ERROR((LM_ERROR,
                 "Error: Missing required command-line option (-i <ior>).\n"));
      this->usage_statement();
      return -1;
    }

  if (this->client_id_ <= 0)
    {
      ACE_ERROR((LM_ERROR,
                 "Error: Required command-line option (-n <client id>).\n"
                 "       The client id should be positive integer.\n"));
      this->usage_statement();
      return -1;
    }

  return 0;
}


int
ClientApp::set_arg(unsigned&   value,
                   const ACE_TCHAR* arg,
                   char        opt,
                   const char* name,
                   int         min)
{
  int tmp = ACE_OS::atoi(arg);

  if (tmp < min)
    {
      ACE_ERROR((LM_ERROR,
                 "Error: -%c <%s> must be integer type with a value of, "
                 "at least, %d.\n", opt, name, min));
      this->usage_statement();
      return -1;
    }

  value = tmp;
  return 0;
}


