    #include <stdio.h>
int main()
{
    int n = 4; 
    int temp = 1;
    for (int i = 1; i <= n; i++)
    {
        
        for (int j = 1; j <= n - i; j++)
        {
            printf("  ");
        }
        
        for (int k = 1; k <= 2*i - 1; k++)
        {
            printf("%d ", temp);
            temp++;
        }
        printf("\n");
    }
    return 0;
}
    