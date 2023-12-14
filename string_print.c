#include "shell_file.h"

void string_print(const char *text)
{
    write(STDOUT_FILENO, text, strlen(text));
}
