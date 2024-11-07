#include <stdio.h>

int main()
{
    int num = 0;
    printf("enter number for pattern: ");
    scanf("%d", &num);

    for (int i = 0; i < num; ++i)
    {
        printf("*");

        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }

        printf("*");
        printf("\n");
    }

    for (int i = num - 1; i >= 0; --i)
    {
        printf("*");

        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }

        printf("*");
        printf("\n");
    }

    return 0;
}
