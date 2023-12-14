#ifndef SHELL_FILE_H
#define SELL_FILE_H

#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdbool.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

void string_print(const char *text);
void render_prompt();
void carry_out_command(const char *instruction);
void fetch_user_command(char *instruction, size_t size);

#endif /* SHELL_FILE_H*/
