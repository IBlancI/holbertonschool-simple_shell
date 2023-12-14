#include "shell.h"
/*
 * main - entry point
 * Return: Always 0 on success
 */
int main(void)
{
	char *line;
	const char *path = ".";

	while (1)
	{
		/* Print the prompt */
		prompt_customized();
		/* Read user input */
		read_line();
		/* execute the command */

		/** Call the function with the specified path */
		listFilesInDirectory(path);

		listFiles(path);
	}

	return (0);
}