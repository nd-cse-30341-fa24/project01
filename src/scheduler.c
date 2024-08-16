/* scheduler.c: PQSH Scheduler */

#include "pqsh/macros.h"
#include "pqsh/scheduler.h"
#include "pqsh/timestamp.h"

#include <errno.h>
#include <sys/wait.h>

/* Global Variables */

Scheduler PQSHScheduler = {
    .policy    = FIFO_POLICY,
    .cores     = 1,
    .timeout   = 250000,
    .event     = EVENT_INPUT,
};

/* Functions */

/**
 * Add new command to waiting queue.
 * @param   s	    Pointer to Scheduler structure.
 * @param   command Command string for new Process.
 **/
void scheduler_add(Scheduler *s, const char *command) {
    /* TODO: Implement */
}

/**
 * Display status of queues in Scheduler.
 * @param   s	    Pointer to Scheduler structure.
 * @param   queue   Bitmask specifying which queues to display.
 **/
void scheduler_status(Scheduler *s, int queue) {
    printf("Running = %4lu, Waiting = %4lu, Finished = %4lu, Turnaround = %05.2lf, Response = %05.2lf\n");
    /* TODO: Complete implementation. */
}

/**
 * Schedule next process using appropriate policy.
 * @param   s	    Pointer to Scheduler structure.
 **/
void scheduler_next(Scheduler *s) {
    /* TODO: Dispatch to appropriate scheduler function. */
}

/**
 * Wait for any children and remove from queues and update metrics.
 * @param   s	    Pointer to Scheduler structure.
 **/
void scheduler_wait(Scheduler *s) {
    /* TODO: Wait for any children without blocking:
     *
     *  - Remove process from queues.
     *  - Update Process metrics.
     *  - Update Scheduler metrics.
     **/
}

/**
 * Handle SIGALRM by setting appropriate event.
 * @param   signum  Signal number (ignored).
 **/
void scheduler_handle_sigalrm(int signum) {
    /* TODO: Add EVENT_TIMER to PQSHScheduler. */
}

/**
 * Handle SIGCHLD by setting appropriate event.
 * @param   signum  Signal number (ignored).
 **/
void scheduler_handle_sigchld(int signum) {
    /* TODO: Add EVENT_CHILD to PQSHScheduler. */
}

/* vim: set expandtab sts=4 sw=4 ts=8 ft=c: */
