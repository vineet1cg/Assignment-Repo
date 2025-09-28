#include <stdio.h>
int main()
{
    char ch = 'A';
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("%c", ch++);
    }
}