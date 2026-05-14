#include "events.h"
#include <stdlib.h>
// create events
Event a = {CONTROLLABLE, 0, SUP_DEBUG_STR("a"), NULL};
Event b = {UNCONTROLLABLE, 1, SUP_DEBUG_STR("b"), NULL};
Event c = {CONTROLLABLE, 2, SUP_DEBUG_STR("c"), NULL};
Event d = {UNCONTROLLABLE, 3, SUP_DEBUG_STR("d"), NULL};

Event *controllable_event_list[CONTROLLABLE_EVENTS_COUNT] = {&a,&c};
