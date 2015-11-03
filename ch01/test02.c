#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 65535
int main(void)
{
    int lineNo = 0;
    char input[MAX_LENGTH];

    while (gets(input) != NULL)
    {
        lineNo += 1;
        printf("%d: %s\n", lineNo, input);
    }

    return 0;
}
