#include<stdio.h>
int main (){
    int n = 4;
    int i , j;
    int temp = 1;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            printf("%d ",temp++);
        }
        printf("\n");
    }
    return 0;
}