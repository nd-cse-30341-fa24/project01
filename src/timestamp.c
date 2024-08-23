/* timestamp.c: PQSH Timestamp */

#include "pqsh/timestamp.h"

#include <time.h>
#include <sys/time.h>

/**
 * Return current timestamp as a double.
 *
 * Utilizes clock_gettime for precision (accounting for seconds and
 * nanoseconds) and falls back to time (only account for seconds) if that
 * fails.
 *
 * @return  Double representing the current time.
 **/
double timestamp() {
    /* TODO: Implement */
    return 0;
}

/* vim: set expandtab sts=4 sw=4 ts=8 ft=c: */
