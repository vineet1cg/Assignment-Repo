#include<stdio.h>
int main (){
    int n = 5;
    int i , j , k;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf(" ");
            
        }
        int a = 65;
        for(k=n;k>=i;k--){
            printf("%c",a++);
        }
        printf("\n");
    }
    return 0;
}