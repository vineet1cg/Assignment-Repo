#include<stdio.h>
int main (){
    int n = 5;
    int i , j , k;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf(" ");
            
        }
        int a = 1;
        for(k=n;k>=i;k--){
            printf("%d",a++);
        }
        printf("\n");
    }
    return 0;
}