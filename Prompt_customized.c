#include "shell.h"

/*
 * show_prompt - entry point
 * Return: Always 0 on success
 */

int prompt_customized(void)
{
	/* Define */
	char *prompt = "Locaca";
	/* Print the prompt */
	printf("%s", prompt);
	return (0);
}
