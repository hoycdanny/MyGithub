
//=============================================================================
/**
 *  @file    Refcounted_Auto_Ptr_Test.h
 *
 *  $Id: Refcounted_Auto_Ptr_Test.h 1861 2011-08-31 16:18:08Z mesnierp $
 *
 *  Define class needed for generating templates. IBM C++ requires this to
 *  be in its own file for auto template instantiation.
 *
 *
 *  @author Steve Huston  <shuston@riverace.com>
 */
//=============================================================================


#ifndef ACE_TESTS_REFCOUNTED_AUTO_PTR_TEST_H
#define ACE_TESTS_REFCOUNTED_AUTO_PTR_TEST_H

#include "ace/Atomic_Op.h"
#include "ace/Synch.h"

struct Printer
{
  Printer (const char *message);
  ~Printer (void) ;

  void print (void);

  const char *message_;
  unsigned int which_;
  static ACE_Atomic_Op<ACE_SYNCH_MUTEX, unsigned int> current_instance_;
  static ACE_Atomic_Op<ACE_SYNCH_MUTEX, long> instance_count_;
};

#endif /* ACE_TESTS_REFCOUNTED_AUTO_PTR_TEST_H */