<h1 style="text-align: center;">Basic Command Interpreter</h1>

This marks the conclusion of the first sprint project in the ALX Software Engineering class. The objective is to create a straightforward interactive shell using the C programming language.

## Educational Goals
Upon completion of this project, participants should possess a robust comprehension of the following concepts, capable of explaining them without relying on external resources:

* [X] Origin and implementation of the original Unix operating system.
* [X] Authorship of the initial version of the UNIX shell.
* [X] Inventor of the B programming language (precursor to the C programming language).
* [X] Ken Thompson's significance.
* [X] Understanding of shell functionality.
* [ ] Definition of a PID and a PPID.
* [ ] Manipulation of the current process environment.
* [ ] Distinction between a function and a system call.
* [ ] Creation of processes.
* [ ] Three prototypes of the `main` function.
* [ ] Shell's utilization of the PATH to locate programs.
* [ ] Execution of another program using the `execve` system call.
* [ ] Suspension of process execution until a child process terminates.
* [ ] Understanding of `EOF` (end-of-file).

## References
- [What on Earth is the shell?](https://en.wikipedia.org/wiki/Unix_shell)
- [The Thompson Shell](https://en.wikipedia.org/wiki/Thompson_shell)
- [The Shell and How It Works](https://oskarth.com/unix01/)

## Permitted Functions and System Calls
The following standard library functions and system calls are allowed for this project:

```c
access
chdir
close
closedir
execve
exit
_exit
fflush
fork
free
getcwd
getline
getpid
isatty
kill
malloc
open
opendir
perror
read
readdir
signal
stat
lstat
fstat
strtok
wait
waitpid
wait3
wait4
write

### Compilation 
Compile the program using the following command, ensuring there are no errors:

$ ./hsh
($) /bin/ls
hsh main.c shell.c
($)
($) exit
$


Similarly, in non-interactive mode:

$ echo "/bin/ls" | ./hsh
hsh main.c shell.c test_ls_2
$
$ cat test_ls_2
/bin/ls
/bin/ls
$
$ cat test_ls_2 | ./hsh
hsh main.c shell.c test_ls_2
hsh main.c shell.c test_ls_2
$

