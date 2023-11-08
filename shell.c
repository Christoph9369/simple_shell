#include "shell.h"
/*
 *my other functions
 */
void soma_c(char *co_mmand, size_t size);
/*
 *main function
 */
int main(void)
{
    char co_mmand[150];

    while (true)
    {
        d_p();
        soma_c(co_mmand, sizeof(co_mmand));
        run_command(co_mmand);
    }
    return 0;
}
