#include "shell_file.h"

/**
 * main - entry point
 * @ac: arg count
 * @av: arg vector
 *
 * Return: 0 on success, 1 on error
 */

int main(void)
{   
    char command[125];

    while(true)
    {
        render_prompt();
        fetch_user_command(command, sizeof(command));
        carry_out_command(command);
    }
    return 0;
}
