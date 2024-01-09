#ifndef EVENT_H
#define EVENT_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef uint8_t event_t

#define EVENT_PLACEHOLDER (1u << 0u)

event_t event_pend(void);

void event_set(event_t event);

#ifdef __cplusplus
}
#endif

#endif /* EVENT_H */
