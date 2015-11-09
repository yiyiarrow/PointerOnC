#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int ch;
    int count = 0;

    while ((ch = getchar()) != EOF)
    {
        if (ch == '{')
            count++;
        if (ch == '}')
        {
            if (count == 0)
                printf("Extra blank!\n");
            else
                count--;
        }
    }

    if (count == 0)
        printf("match!!\n");
    else
        printf("%d don't match!!\n", count);

    return 0;
}
