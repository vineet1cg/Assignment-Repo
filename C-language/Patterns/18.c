#include<stdio.h>
int main (){
    int n = 5;
    int i , j;
    
    for(i=1;i<=n;i++){
        int temp = 65;
        for(j=n;j>=i;j--){
            printf("%c",temp++);
        }
        printf("\n");
    }
}