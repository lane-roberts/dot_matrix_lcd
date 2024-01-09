#include "event.h"

/**
 * Main function.
 */
int main(void)
{
    while (1)
    {
        event_t const event = event_pend();

        if (0u != (EVENT_PLACEHOLDER & event))
        {
            // Do action
        }
    }
}
