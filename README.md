<h1 style="text-align: center;">Simple Shell<h1>

## References
- [What on Earth is the shell?](https://en.wikipedia.org/wiki/Unix_shell)
- [The Thompson Shell](https://en.wikipedia.org/wiki/Thompson_shell)
- [The Shell and How It Works](https://oskarth.com/unix01/)

Table of Contents
Project Overview
Requirements
Authorized Functions and System Calls
Compilation Process
Tasks
Authors
Project Overview
The Simple Shell project is a collaborative effort at ALX SE aimed at developing a straightforward and customizable UNIX command interpreter. This shell is designed to emulate the behavior of the standard shell (sh) and acts as an intermediary between the user and the kernel, executing commands.

Requirements
Allowed editors: vi, vim, emacs.
Compilation on Ubuntu 20.04 LTS using gcc with the options -Wall -Werror -Wextra -pedantic -std=gnu89.
Adherence to the Betty style, checked with betty-style.pl and betty-doc.pl.
All files ending with a new line.
Avoidance of global variables.
No more than 5 functions per file.
Header files should be include guarded.
Presence of an AUTHORS file at the repository's root, listing all contributors.
Authorized Functions and System Calls
access (man 2 access)
chdir (man 2 chdir)
close (man 2 close)
closedir (man 3 closedir)
execve (man 2 execve)
exit (man 3 exit)
_exit (man 2 _exit)
fflush (man 3 fflush)
fork (man 2 fork)
free (man 3 free)
getcwd (man 3 getcwd)
getline (man 3 getline)
getpid (man 2 getpid)
isatty (man 3 isatty)
kill (man 2 kill)
malloc (man 3 malloc)
open (man 2 open)
opendir (man 3 opendir)
perror (man 3 perror)
read (man 2 read)
readdir (man 3 readdir)
signal (man 2 signal)
stat (__xstat) (man 2 stat)
lstat (__lxstat) (man 2 lstat)
fstat (__fxstat) (man 2 fstat)
strtok (man 3 strtok)
wait (man 2 wait)
waitpid (man 2 waitpid)
wait3 (man 2 wait3)
wait4 (man 2 wait4)
write (man 2 write)
Compilation Process
Your code will be compiled using the following command:

bash
Copy code
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
Tasks
0. Betty would be proud
Write clean code that successfully passes the Betty checks.

1. Simple shell 0.1
Develop a UNIX command line interpreter.

Usage: simple_shell
Your Shell should:

Display a prompt, awaiting user command input. Each command line must end with a new line.
Display the prompt again after executing a command.
Handle simple command lines without semicolons, pipes, redirections, or other advanced features.
Process command lines composed of a single word; no arguments will be passed to programs.
Print an error message and redisplay the prompt if an executable cannot be found.
Handle errors.
Manage the "end of file" condition (Ctrl+D).
You don’t have to:

Use the PATH.
Implement built-ins.
Handle special characters: ", ', `, \, *, &, #.
Move the cursor.
Manage commands with arguments.
2. Simple shell 0.2
Simple shell 0.1 +

Handle command lines with arguments.
3. Simple shell 0.3
Simple shell 0.2 +

Handle the PATH.
Avoid calling fork if the command doesn’t exist.
4. Simple shell 0.4
Simple shell 0.3 +

Implement the exit built-in that exits the shell.
Usage: exit.
No need to handle any arguments to the built-in exit.
5. Simple shell 1.0
Simple shell 0.4 +

Implement the env built-in that prints the current environment.
6. Simple shell 0.1.1
Simple shell 0.1 +

Write a custom getline function.
Use a buffer to read multiple characters at once, minimizing calls to the read system call.
Utilize static variables.
Avoid using getline.
You don’t have to:
Move the cursor.
7. Simple shell 0.2.1
Simple shell 0.2 +

Develop a custom strtok function.
Refrain from using strtok.
8. Simple shell 0.4.1
Simple shell 0.4 +

Handle arguments for the built-in exit.
Usage: exit status, where status is an integer for exiting the shell.
9. setenv, unsetenv
Simple shell 1.0 +

Implement the setenv and unsetenv built-in commands:

setenv
Initialize a new environment variable or modify an existing one.
Command syntax: setenv VARIABLE VALUE.
Print an error on stderr on failure.
unsetenv
Remove an environment variable.
Command syntax: unsetenv VARIABLE.
Print an error on stderr on failure.
10. cd
Simple shell 1.0 +

Implement the built-in command cd:

Changes the current directory of the process.
Command syntax: cd [DIRECTORY].
If no argument is given to cd, interpret the command like cd $HOME.
Handle the command cd -.
Update the environment variable PWD when changing directory.
man chdir, man getcwd
11. ;
Simple shell 1.0 +

Handle the commands separator ;.
12. && and ||
Simple shell 1.0 +

Handle the && and || shell logical operators.
13. alias
Simple shell 1.0 +

Implement the alias built-in command.
Usage: alias [name[='value'] ...]:
alias: Prints a list of all aliases, one per line, in the form * name='value'.
alias name [name2 ...]: Prints the aliases name, name2, etc 1 per line, in the form name='value'.
