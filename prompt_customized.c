#include "shell.h"

#define MAX_INPUT_SIZE 100

int main() {
    char input[MAX_INPUT_SIZE];

    while (1) {
        /* Display prompt */
        printf("Prompt_Adil> ");

        /* Read input from the user */
        if (fgets(input, sizeof(input), stdin) == NULL) {
            /* Handle end of file (Ctrl+D) */
            printf("\n");
            break;
        }

        /* Remove the newline character from the end of the input */
        input[strcspn(input, "\n")] = '\0';

        /* Execute the command (for now, just print it) */
        printf("Executing: %s\n", input);

        /* You can add logic to check if the command exists and execute it */
        /* For now, let's assume the command is always valid */

        /* Display prompt again */
    }

    return 0;
}
