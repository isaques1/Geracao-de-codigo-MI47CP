#include "events.h"
#include "supe1m1m2.h"
#include <stdbool.h>
#include <stdlib.h>

// Supervisor specific instances
// alphabet create
const Alphabet supe1m1m2_a_evt0;
const Alphabet supe1m1m2_d_evt1;
const Alphabet supe1m1m2_b_evt2;
const Alphabet supe1m1m2_c_evt3;

// Alphabet init
const Alphabet supe1m1m2_a_evt0 = {&a, &supe1m1m2_d_evt1};
const Alphabet supe1m1m2_d_evt1 = {&d, &supe1m1m2_b_evt2};
const Alphabet supe1m1m2_b_evt2 = {&b, &supe1m1m2_c_evt3};
const Alphabet supe1m1m2_c_evt3 = {&c, NULL};

// states create
const State supe1m1m2_S0_S0_S0;
const State supe1m1m2_S0_S0_S1;
const State supe1m1m2_S0_S1_S0;
const State supe1m1m2_S0_S1_S1;
const State supe1m1m2_S1_S0_S0;
const State supe1m1m2_S1_S0_S1;

// transitions create and init
const Transition supe1m1m2_S0_S0_S0_t0;
const Transition supe1m1m2_S0_S0_S0_t0 = {&a, &supe1m1m2_S0_S1_S0, NULL};

const Transition supe1m1m2_S0_S0_S1_t0;
const Transition supe1m1m2_S0_S0_S1_t1;
const Transition supe1m1m2_S0_S0_S1_t0 = {&d, &supe1m1m2_S0_S0_S0, &supe1m1m2_S0_S0_S1_t1};
const Transition supe1m1m2_S0_S0_S1_t1 = {&a, &supe1m1m2_S0_S1_S1, NULL};

const Transition supe1m1m2_S0_S1_S0_t0;
const Transition supe1m1m2_S0_S1_S0_t0 = {&b, &supe1m1m2_S1_S0_S0, NULL};

const Transition supe1m1m2_S0_S1_S1_t0;
const Transition supe1m1m2_S0_S1_S1_t1;
const Transition supe1m1m2_S0_S1_S1_t0 = {&d, &supe1m1m2_S0_S1_S0, &supe1m1m2_S0_S1_S1_t1};
const Transition supe1m1m2_S0_S1_S1_t1 = {&b, &supe1m1m2_S1_S0_S1, NULL};

const Transition supe1m1m2_S1_S0_S0_t0;
const Transition supe1m1m2_S1_S0_S0_t0 = {&c, &supe1m1m2_S0_S0_S1, NULL};

const Transition supe1m1m2_S1_S0_S1_t0;
const Transition supe1m1m2_S1_S0_S1_t0 = {&d, &supe1m1m2_S1_S0_S0, NULL};


// states init
const State supe1m1m2_S0_S0_S0 = {true, SUP_DEBUG_STR("S0_S0_S0"), &supe1m1m2_S0_S0_S0_t0};
const State supe1m1m2_S0_S0_S1 = {false, SUP_DEBUG_STR("S0_S0_S1"), &supe1m1m2_S0_S0_S1_t0};
const State supe1m1m2_S0_S1_S0 = {false, SUP_DEBUG_STR("S0_S1_S0"), &supe1m1m2_S0_S1_S0_t0};
const State supe1m1m2_S0_S1_S1 = {false, SUP_DEBUG_STR("S0_S1_S1"), &supe1m1m2_S0_S1_S1_t0};
const State supe1m1m2_S1_S0_S0 = {false, SUP_DEBUG_STR("S1_S0_S0"), &supe1m1m2_S1_S0_S0_t0};
const State supe1m1m2_S1_S0_S1 = {false, SUP_DEBUG_STR("S1_S0_S1"), &supe1m1m2_S1_S0_S1_t0};

// Supervisor create
Supervisor supe1m1m2 = {(State *)&supe1m1m2_S0_S0_S0, (State *)&supe1m1m2_S0_S0_S0, NULL,  &supe1m1m2_a_evt0, "supe1m1m2"};
