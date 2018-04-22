mount /dev/cdrom /mnt/tmp/
cd /mnt/tmp/
mkdir –p /mnt/rheldvd
cp -r ./tmp/* rheldvd/
cp /mnt/tmp/media.repo /etc/yum.repos.d/rheldvd.repo
vim rheldvd.repo
	add 
  baseurl=file:///mnt/rheldvd/
  enabled=1
chmod 644 /etc/yum.repos.d/rheldvd.repo
yum update
yum install https://dl.fedoraproject.org/pub/epel/epel-release-latest-7.noarch.rpm
yum update
