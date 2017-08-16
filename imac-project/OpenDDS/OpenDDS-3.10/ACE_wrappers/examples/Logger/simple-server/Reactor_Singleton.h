/* -*- C++ -*- */


//=============================================================================
/**
 *  @file    Reactor_Singleton.h
 *
 *  $Id: Reactor_Singleton.h 1861 2011-08-31 16:18:08Z mesnierp $
 *
 *  @author Doug Schmidt
 */
//=============================================================================


#ifndef _REACTOR_SINGLETON_H
#define _REACTOR_SINGLETON_H

#include "ace/Singleton.h"
#include "ace/Null_Mutex.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include "ace/Reactor.h"

// Our global Reactor Singleton.
typedef ACE_Singleton<ACE_Reactor, ACE_Null_Mutex> REACTOR;

#endif /* _REACTOR_SINGLETON_H */
