/* -*- C++ -*- $Id: Test_i.cpp 2577 2015-06-19 21:57:06Z mesnierp $ */

// ******  Code generated by the The ACE ORB (TAO) IDL Compiler *******
// TAO and the TAO IDL Compiler have been developed by the Center for
// Distributed Object Computing at Washington University, St. Louis.
//
// Information about TAO is available at:
//                 http://www.cs.wustl.edu/~schmidt/TAO.html

#include "Test_i.h"
#include "Terminator.h"

#include <iostream>

// Implementation skeleton constructor
Test_i::Test_i (Terminator &terminator)
  : message_count_ (0)
  , terminator_ (terminator)
{
}

// Implementation skeleton destructor
Test_i::~Test_i (void)
{
}

CORBA::Boolean
Test_i::send_message (const char * user_name,
                      const char * subject,
                      char *& message)
{
  std::cout << "Message count: " << message_count_++ << std::endl;
  std::cout << "Message from: " << user_name << std::endl
       << "Subject:      " << subject << std::endl
       << "Message:      " << message << std::endl;
  if (message_count_ == 4)
    {
      ACE_Message_Block *mb = 0;
      ACE_NEW_RETURN(mb, ACE_Message_Block(2), 0);
      ACE_OS::sprintf(mb->wr_ptr (), "0");
      terminator_.putq(mb);
    }
  return 1;
}
