// $Id: test_i.inl 14 2007-02-01 15:49:12Z mitza $

ACE_INLINE
Test_i::Test_i (CORBA::ORB_ptr orb)
  :  orb_ (CORBA::ORB::_duplicate (orb))
{
}