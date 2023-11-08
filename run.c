#include "shell.h"
/*
 *function to run she shell command
 */
void run_command(const char *string)
{
    pid_t child_pid = fork();

    if (child_pid == -1)
    {
        chris_print("Error forking process.\n");
        exit(EXIT_FAILURE);
    }
    else if (child_pid == 0)
    {
        char *arguments[130];
        int count = 0;

        char *tokens = strtok((char *)string, " ");
        while (tokens != NULL)
        {
            arguments[count++] = tokens;
            tokens = strtok(NULL, " ");
        }
        arguments[count] = NULL;
        execvp(arguments[0], arguments);
        chris_print("Error executing command.\n");
        exit(EXIT_FAILURE);
    }
    else
    {
        wait(NULL);
    }
}
