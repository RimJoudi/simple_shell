#include "shell.h"
/**
 *main - main function
 *Return: Always(0)
 */
int main(void)
{
	int status = 1;
	char *line = NULL, **argv;
  /*signal(SIGINT, sig_handler);*/
	signal(SIGINT, sig_handler);
	while (status)
	{
		if (isatty(STDIN_FILENO))
		{
			prompt();
		}
		line = _readline();
		if (line[0] == '\n')
		{
			free(line);
			continue;
		}
		argv = parse_line(line, DELIMIT);
		if (_strcmp(argv[0], "env") == 0)
		{
			print_env();
		}
		path_command(argv);
	}
	free(line);
	free_array(argv);
	return (0);
}

