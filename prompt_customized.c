#include "shell.h"

/**
 * printPrompt - Print the environment variables.
 * This function prints the environment variables to the standard output.
 * Each environment variable is printed on a new line.
 * Return: no return, void function
 */


/* This function prints all environment variables of the program */
void printPrompt(void)
{
	/* Declaration of a pointer to an array of strings */
	char **env;

	/* Loop through the environment array until the end (NULL) is reached */
	for (env = environ; *env != NULL; env++)
	{
		/* Print each environment variable on a new line */
		printf("%s\n", *env);
	}
}
