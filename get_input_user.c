#include "shell_file.h"

void fetch_user_command(char *instruction, size_t size)
{
    if (fgets(instruction, size, stdin) == NULL)
    {
        if (feof(stdin))
        {
            string_print("\n");
            exit(EXIT_SUCCESS);
        }else{
            string_print("Error encountered while attempting to read input.\n");
            exit(EXIT_FAILURE);
        }
    }
    instruction[strcspn(instruction, "\n")] = '\0';
}
