/* A process is an instance of an executing program, that has a unique process ID. This process ID is used by many functions and system calls ti interact with and manipulate processes. In order to retrieve the current process ID, you can use the system call getpid (man 2 getpid): */

#include <stdio.h>
#include <unistd.h>

/**
 * main - PID
 *
 * Return: Always 0.
 */
int main(void)
{
    pid_t my_pid;

    my_pid = getppid();
    printf("%u\n", my_pid);
    return (0);
}
