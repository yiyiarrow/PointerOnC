#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 1000

int main(void)
{
    int  strLen;
    int  maxLen = -1;
    char input[MAX_LENGTH];
    char *maxStr;

    while (gets(input) != NULL)
    {
        strLen = strlen(input);
        if (strlen >= maxLen)
        {
            maxLen = strLen;        
            maxStr = input;
        }
    }

    if (maxLen >= 0)
    {
        printf("longest string: %s\n", maxStr);
    }

    return EXIT_SUCCESS;
}

