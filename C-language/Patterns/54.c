#include <stdio.h>

int main()
{
    int i , j , k , l ;
    int n = 5;
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            printf(" ");
        }
        for(k=1;k<=2*i-1;k++){
            if(k==1 || k==2*i-1){
                printf("*");
            }
            else{
                printf(" ");
            }
            
        }
       
        printf("\n");
    }
    for(i=n-1;i>0;i--){
        for(j=1;j<=n-i;j++){
            printf(" ");
        }
        for(k=1;k<=2*i-1;k++){
            if(k==1 || k==2*i-1){
                printf("*");
            }
            else{
                printf(" ");
            }
            
        }
       
        printf("\n");
    }

    return 0;
}