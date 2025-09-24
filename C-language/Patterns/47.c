#include <stdio.h>
int main()
{
    int n = 5;
    int temp = 0;
    for(int i = 1 ; i<=n ; i++){
        
        for(int j = 1 ; j<=i ; j++){
            printf("%d ",temp);
            temp = temp + 2;
            
        }
        printf("\n");
    }

    return 0;
}
