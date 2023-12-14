# holbertonschool-simple_shell
write (man 2 write)
Usage
To use this program:

Clone the repo

git clone https://github.com/IBlancI/simple_shell
Compile it with

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
How to use it
In order to use this shell, in a terminal, first run the program:

prompt$ ./hsh

It will then display a simple prompt and wait for commands.

$

A command will be of the type $ command This shell can handle two types of commands: builtins and normal program.

List of built-ins
exit
Exits the shell
env
Prints the current environment
setenv
Initialize a new environment variable, or modify an existing one
unsetenv
Remove an environment variable
cd [directory]
Changes the current directory of the process
help
Display all the enviroment variables
history
Displays the history list
Command
Basicly Every Program in $PATH It Support Single Word like ls

It Handle Path ls /tmp

it Handle Options Like ls -l

it Handle All Three Togther Like ls -l /var

it Handle Command Path Also Like /bin/ls And All The Option And Path Like /bin/ls -l /var

it Handle Comments #
