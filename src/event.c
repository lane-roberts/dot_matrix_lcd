#include "event.h"

static volatile event_t event_mask = 0u;

/**
 * Pends on an event
 * 
 * @return A bitmask of events.
 */
event_t event_pend(void)
{
    while (0u == event_mask);

    event_t const event = event_mask;
    event_mask = 0u;

    return event;
}

/**
 * Sets an event.
 * 
 * @param event A bitmask of events to set.
 */
void event_set(event_t event)
{
    event_mask |= event;
}
