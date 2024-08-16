/* pqsh.c: Process Queue Shell */

#include "pqsh/macros.h"
#include "pqsh/options.h"
#include "pqsh/scheduler.h"

#include <errno.h>
#include <signal.h>
#include <string.h>
#include <sys/time.h>

/* Global Variables */

extern Scheduler PQSHScheduler;

/* Help Message */

void help() {
    printf("Commands:\n");
    printf("  add    command    Add command to waiting queue.\n");
    printf("  status [queue]    Display status of specified queue (default is all).\n");
    printf("  help              Display help message.\n");
    printf("  exit|quit         Exit shell.\n");
}

/* Main Execution */

int main(int argc, char *argv[]) {
    Scheduler *s = &PQSHScheduler;

    /* TODO: Parse command line options */

    /* TODO: Register signal handlers */

    /* TODO: Start timer interrupt */

    /* TODO: Process shell commands */
    while (!feof(stdin)) {
        char command[BUFSIZ]  = "";
        char argument[BUFSIZ] = "";

        printf("\nPQSH> ");

        while (!fgets(command, BUFSIZ, stdin) && !feof(stdin)) {
            /* TODO: Check events */
        }

        chomp(command);

        if (streq(command, "help")) {
            help();
        } else if (streq(command, "exit") || streq(command, "quit")) {
            break;
        } else if (sscanf(command, "add %[^\t\n]", argument) == 1) {
            /* TODO: Handle add command */
        } else if (streq(command, "status") || sscanf(command, "status %[^\t\n]", argument) == 1) {
            /* TODO: Handle status command */
        } else if (strlen(command)) {
            printf("Unknown command: %s\n", command);
        }
    }

    return EXIT_SUCCESS;
}

/* vim: set expandtab sts=4 sw=4 ts=8 ft=c: */
