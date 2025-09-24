#include<stdio.h>
int main (){
    int n = 5;
    int i , j;
    int temp = 1;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%d ",temp++);
        }
        printf("\n");
    }
    return 0;
}