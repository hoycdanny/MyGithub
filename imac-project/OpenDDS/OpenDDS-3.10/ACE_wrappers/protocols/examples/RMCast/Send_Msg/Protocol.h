// file      : Protocol.h
// author    : Boris Kolpackov <boris@kolpackov.net>
// cvs-id    : $Id: Protocol.h 14 2007-02-01 15:49:12Z mitza $

#ifndef PROTOCOL_H
#define PROTOCOL_H

unsigned short const payload_size = 702;
unsigned long const message_count = 80000;

struct Message
{
  unsigned int sn;

  unsigned short payload[payload_size];
};

#endif  // PROTOCOL_H