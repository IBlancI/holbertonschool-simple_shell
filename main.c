#include "shell.h"

/**
 * main - Entry point
 *
 * Return: 0 to sucess
 */

int main(void)
{
	char *input = NULL;
	size_t len_input = 0;
	ssize_t read = 0;

	/* Continuously read user input */
	while (1)
	{
		/* If input is from a terminal, print a prompt */
		if (isatty(STDIN_FILENO))
		{
			printf("Prompt_Adil_Saber ");
			fflush(stdout);
		}

		/* Read user input */
		read = getline(&input, &len_input, stdin);
		/* Check for EOF */
		if (read == EOF)
		{
			free(input);
			exit(0);
		}
		/* Remove newline character from input */
		if (read > 0 && input[read - 1] == '\n')
		{
			input[read - 1] = '\0';
		}
		/* Tokenize and process input */
		token_input(input);
	}
	/* Free allocated memory */
	free(input);
	return (0);
}
