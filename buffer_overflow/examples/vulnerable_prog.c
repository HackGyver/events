#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char buffer[256] = {0};

    if (argc < 2)
    {
        printf("Usage: %s username\n", argv[0]);
        exit(1);
    }

    /* strcpy doesn't check the size of the destination buffer */
    strcpy(buffer, argv[1]);
    printf("Your username is: %s\n", buffer);

    return 0;
}
