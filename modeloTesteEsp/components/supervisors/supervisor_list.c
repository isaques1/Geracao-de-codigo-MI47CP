#include "supervisor_list.h"
#include "supe1m1m2.h"

// make list with all supervisors
// first create all supervisors
extern SupervisorList supe1m1m2_list;

// then recreate and linking them
SupervisorList sup_list = {&supe1m1m2, NULL};
