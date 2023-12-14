#include "shell_file.h"

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
