#include<stdio.h>
int main (){
    int n = 5;
    int i , j;
    
    for(i=1;i<=n;i++){
        int temp = 1;
        for(j=n;j>=i;j--){
            printf("%d",temp++);
        }
        printf("\n");
    }
}