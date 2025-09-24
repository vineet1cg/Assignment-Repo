#include<stdio.h>
int main (){
    int n = 5;
    int i , j;
    int temp = 65;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%c ",temp++);
        }
        printf("\n");
    }
    return 0;
}