#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main(void)
{
    int success = trapfile("trap.txt");
    if (success < 0)
    {
        printf("Unable to make the trap.\n");
        exit(-1);
    }
    printf("Trap created successfully.\n");
    exit(0);
}