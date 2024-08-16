# Project 01: Process Queue Shell

This is [Project 01] of [CSE.30341.FA24].

## Students

- Domer McDomerson (dmcdomer@nd.edu)
- Belle Fleur (bfleur@nd.edu)

## Video

[Reflection Video](...)

## Brainstorming

The following are questions that should help you in thinking about how to
approach implementing [Project 01].

### Process

1. Given a command string such as `sleep 10`, how would you start a process
   that executes this command?  In particular, how would you handle the name of
   the program (ie. `sleep`) versus the arguments to the program (ie. `10`)?

2. What signals do you need to send to a process to **pause** it (ie. suspend
   its execution) or to **resume** it (ie. continue its execution)?

### Queue

1. What must happen when **pushing** a process to a `Queue`?

2. What must happen when **popping** a process from a `Queue`?

3. What must happen when **removing** a process from a `Queue`?

### Shell

1. What **system call** will allow us to trigger a timer event at periodic
   intervals?  What signal does it send when a timer is triggered?

2. How will you interweave reading **input** from the user, handling periodic
   **timers**, and waiting for **child** processes?

3. What functions would allow you to parse strings with various arguments?

### Scheduler

1. What needs to be created when calling `scheduler_add` and where should this
   object go?

2. How would you determine if you should display a particular queue in the
   `scheduler_status` function?

3. How would you wait for a process without blocking? What information do you
   need to update when a process terminates?

4. What should the scheduler handler functions do when they receive either a
   `SIGALRM` or a `SIGCHLD`?

5. When and where are `scheduler_wait` and `scheduler_next` called?

### Timestamp

1. How would you use the result of `gettimeofday` to return a `double`
   representing the current time in **seconds**?

## Errata

> Describe any known errors, bugs, or deviations from the requirements.

## Acknowledgments

> List anyone you collaborated with or received help from (including TAs, other
students, and AI tools)


[Project 01]: https://www3.nd.edu/~pbui/teaching/cse.30341.fa24/project01.html
[CSE.30341.FA24]: https://www3.nd.edu/~pbui/teaching/cse.30341.fa24/
