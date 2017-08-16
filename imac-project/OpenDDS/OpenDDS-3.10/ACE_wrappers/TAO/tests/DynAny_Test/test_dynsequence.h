//=============================================================================
/**
 *  @file    test_dynsequence.h
 *
 *  $Id: test_dynsequence.h 14 2007-02-01 15:49:12Z mitza $
 *
 *  Header file for class to test DynSequence.
 *
 *
 *  @author Jeff Parsons <parsons@cs.wustl.edu>
 */
//=============================================================================


#if !defined (TEST_DYNSEQUENCE_H)
#define TEST_DYNSEQUENCE_H

#include "tao/ORB.h"

class Test_DynSequence
{
public:
  Test_DynSequence (CORBA::ORB_var orb, int debug);
  ~Test_DynSequence (void);

  const char* test_name (void) const;

  int run_test (void);

private:
  CORBA::ORB_var orb_;
  char* test_name_;
  CORBA::ULong error_count_;
  int debug_;
};

#endif /* TEST_DYNSEQUENCE_H */
