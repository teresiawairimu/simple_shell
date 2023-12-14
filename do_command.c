#include "shell_file.h"

void carry_out_command(const char *instruction)
{
    pid_t child_pid = fork();

    if (child_pid == -1)
    {
        perror("fork");
        exit(EXIT_FAILURE);

    } 
    else if (child_pid == 0)
    {
        execlp(instruction, instruction, (char *)NULL);
        perror("execlp");
        exit(EXIT_FAILURE);
    } 
    else
    {
        wait(NULL);
    }
}
