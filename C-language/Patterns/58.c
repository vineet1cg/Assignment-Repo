#include <stdio.h>

int main()
{
    int n, digit, i, j;

    printf("Enter the length of the sequence line: ");
    scanf("%d", &n);

    printf("Enter the digit to print on other lines: ");
    scanf("%d", &digit);

    for (i = 1; i <= (n * 2 - 1); i++)
    {
        if (i == n)
        {

            for (j = 1; j <= n; j++)
            {
                printf("%d", j);
            }
        }
        else
        {

            for (j = 1; j < n; j++)
            {
                printf(" ");
            }
            printf("%d", digit);
        }
        printf("\n");
    }

    return 0;
}
