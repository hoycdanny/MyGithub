#ifndef Clock_Ticks__h_
#define Clock_Ticks__h_
/**
 * @file Clock_Ticks.h
 *
 * $Id: Clock_Ticks.h 1861 2011-08-31 16:18:08Z mesnierp $
 *
 * @author Carlos O'Ryan <coryan@atdesk.com>
 *
 */

namespace Clock_Ticks
{
  /// Return the number of clock ticks per second
  long get_hz (void);

  /// Return the number of microseconds per tick
  int get_usecs_per_tick (void);
}

#endif /* Clock_Ticks__h_ */
