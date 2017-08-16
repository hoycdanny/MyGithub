/* -*- C++ -*- */

//=============================================================================
/**
 *  @file    HT_Server.h
 *
 *  $Id: HT_Server.h 1861 2011-08-31 16:18:08Z mesnierp $
 *
 *  @author Douglas C. Schmidt
 */
//=============================================================================


#ifndef _HT_SERVER_H
#define _HT_SERVER_H

#include "Hash_Table.h"

/**
 * @class HT_Server
 *
 * @brief Provides the server's hash table abstraction.
 */
class HT_Server : public Hash_Table
{

public:
  virtual Protocol_Record *insert (const char *key_name,
                                   int max_len = MAXUSERIDNAMELEN);
};

#endif /* _HT_SERVER_H */