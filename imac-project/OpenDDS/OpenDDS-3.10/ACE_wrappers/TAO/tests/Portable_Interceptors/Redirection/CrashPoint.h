// author    : Boris Kolpackov <boris@dre.vanderbilt.edu>
// $Id: CrashPoint.h 14 2007-02-01 15:49:12Z mitza $

#ifndef CRASH_POINT_H
#define CRASH_POINT_H

// Valid crash-point values:
//
// 0 no crash (default)
//
// 1 crash before logging the reply
//
// 2 crash after logging the reply but before replying to the client
//

extern short crash_point;

#endif // CRASH_POINT_H