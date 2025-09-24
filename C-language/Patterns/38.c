#include<stdio.h>
int main(){
    int i , j ,k;
    int n = 5;
    for(i=1;i<=n;i++){
        for(k=1;k<=i;k++){
            printf(" ");
        }
        int temp = 1;
        for(j=n;j>=i;j--){
            printf("%d",temp++);
        }
        printf("\n");
    }
}