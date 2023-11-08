#include "shell.h"
/*
 *our printf function
 */
void chris_print(const char *messageInString)
{
    write(STDOUT_FILENO, messageInString, strlen(messageInString));
}
