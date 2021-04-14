# simple_shell

This project is a part of the curriculum of software engineering for the low-level programming module at [Holberton School](https://www.holbertonschool.com/tn/en/ "Holberton School").

## Description

The project  consists on creating a simple UNIX command interpreter and it's a recreation a of the command-line interpreter (shell).


###  Compilation

Our shell will be compiled this way:

`$ gcc -Wall -Werror -Wextra -pedantic *.c -o hsh`

And it has been tested on Ubuntu 14.04 LTS in a VirtualBox on it via Vagrant(2.2.14) using the Betty style.

###  Usage

To use our shell you simply need to:

- Clone the repository

`$ git clone https://github.com/maroua199525/simple_shell.git`


-   Change directory to simple_shell

`$ cd simple_shell/`

-  Compile with the following:

`$ gcc -Wall -Werror -Wextra -pedantic *.c -o hsh`

-  Once compiled, to start the program, run:

`$ ./hsh`

-  To exit the program, run:

`$ Ctrl+D`

- To compile the man page:

`$ man ./man_1_simple_shell`


###List of allowed used functions and system calls
- chdir (man 2 chdir)
- close (man 2 close)
- execve (man 2 execve)
- exit (man 3 exit)
- fork (man 2 fork)
- free (man 3 free)
- getline (man 3 getline)
- getpid (man 2 getpid)
- malloc (man 3 malloc)
- open (man 2 open)
- perror (man 3 perror)
- read (man 2 read)
- signal (man 2 signal)
- stat (__xstat) (man 2 stat)
- strtok (man 3 strtok)
- wait (man 2 wait)
- waitpid (man 2 waitpid)
- write (man 2 write)





### Files and functions

|  File |  Function  | Description  |
| ------------ | ------------ | ------------ |
|   shell.h | header file  |   contains all the prototypes  |
|  built_in.c  |   check_builtin | check if the command passed is a builtin or not  |
|   | fun_builtin  | return the function of the command bultin passed |
|   | print_env  | prints all the environment variables  |
|   | fun_builtin  | return the function of the command bultin passed |
|   | print_env  | prints all the environment variables  |
|   | change_dir |  change directory|
| execute.c  | exec_cmd  |  execve the comands from line. |
|  morefun.c |  sig_handler |checks if Ctrl C is pressed |
|   |  prompt |  Display Shell Prompt "$" |
|  parser_line.c | parse_line  |  parses the input |
|  find_path.c | add_command  |  add command to the path |
|   |  append_pathcmd |  concat the command with the full path |
| readline.c  |_readline   |   read a line from insert|
|  simple_shell.c | main  | main function  |


### C recreated functions used  :

|  Function | Description  |
| ------------ | ------------ |
|_getenv.c    |  Gets the value of an environment variable |
| _strlen  |  Gets the length of a string   |
| _strcpy |  Copies a string|
|   _strcmp|  Compares two strings|
|_strdup   |  Duplicates a string |
|  _strcat |Concatenates two strings  |

###Examples:

###### Example 1



> vagrant@vagrant:~/simple_shell$ ./hsh
$ ls
AUTHORS    README.md~  built_in.c  find_path.c  hsh         parser_line.c  readline.c~  shell.h README.md  _getenv.c   execute.c   function.c   more_fun.c  readline.c shell        simple_shell.c
$



###### Example 2

> vagrant@vagrant:~/simple_shell$ ./hsh
>  $ pwd
>  /home/vagrant/simple_shell
>   $ ^D


######Example 3


>   vagrant@vagrant:~/simple_shell$ ./hsh
$ ls -l /tmp
total 4
drwx------ 3 root root 4096 Apr 14 08:14 systemd-private-c8b594543b954c10b9ad1732d559d671-systemd-resolved.service-SYzIKI
>  $ ^D



###Testing
When testing our shell (hsh) works like this;

1. In interactive mode:

> $ ./hsh
($) /bin/ls
hsh main.c shell.c
($)
($) exit
 $




2. In non-interactive mode:

###### *Example 1*


> $ echo "/bin/ls" | ./hsh
hsh main.c shell.c test_ls_2
$
$ cat test_ls_2
/bin/ls
/bin/ls
$



------------

###### *Example 2*

>  $ cat test_ls_2 | ./hsh
hsh main.c shell.c test_ls_2
hsh main.c shell.c test_ls_2
$ $




### Known bugs :
Our shell (hsh) for now don't support  builtins such as cd , echo , exit...
and don't handle  the && and || shell logical operators.


### Annotations

We have writen a [blog post](https://joudirim93.medium.com/what-happens-when-you-type-ls-l-c-in-the-shell-8ed10196d711 "what happens when typing ls -l *.c and hit enter in shell")  describing what happens when typing ls -l *.c and hit Enter in  shell using examples and detailing all different processes.
Feel free to check it.




Peer Project made within 15 days.

### Authors

* Rim Joudi  - (https://github.com/RimJoudi)

* Maroua Alaya  - (https://github.com/maroua199525)




[![Holberton school](https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcT8g8Cvqw9Z7Rx9IHGq9gKYneeM1U4_KvUNTeaCBkX2L5pFE3Ihw-5uNGs9xPSmUb5kXA&usqp=CAU)]











###### Project made for [Holberton school](https://www.holbertonschool.com/tn/en/ "Holberton school") by Rim Joudi and Marwa Alaya.