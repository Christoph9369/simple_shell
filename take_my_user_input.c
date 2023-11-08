#include "shell.h"
#include "shell.c"
/*
 *calling soma_c function from main
 */
void soma_c(char *msg, size_t size)
{
    if (fgets(msg, size, stdin) == NULL)
    {
        if (feof(stdin))
        {
            chris_print("\n");
            exit(EXIT_SUCCESS);
        }
        else
        {
            chris_print("enter correct inputs\n");
            exit(EXIT_FAILURE);
        }
    }
    /*
     *removing a new line
     */
    msg[strcspn(msg, "\n")] = '\0';
}
