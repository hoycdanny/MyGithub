//
// $Id: Memory_Growth.h 2179 2013-05-28 22:16:51Z mesnierp $
//

#ifndef MEMORY_GROWTH_H
#define MEMORY_GROWTH_H
#include /**/ "ace/pre.h"

#include "TestS.h"

#if defined (_MSC_VER)
# pragma warning(push)
# pragma warning (disable:4250)
#endif /* _MSC_VER */

/// Implement the Test::Hello interface
class Memory_Growth
  : public virtual POA_Test::Memory_Growth
{
public:
  /// Constructor
  Memory_Growth (CORBA::ORB_ptr orb);

  // = The skeleton methods
  virtual void ping (void);

  virtual void shutdown (void);

private:
  /// Use an ORB reference to convert strings to objects and shutdown
  /// the application.
  CORBA::ORB_var orb_;
};

#if defined(_MSC_VER)
# pragma warning(pop)
#endif /* _MSC_VER */

#include /**/ "ace/post.h"
#endif /* MEMORY_GROWTH_H */
