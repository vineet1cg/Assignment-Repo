#include<stdio.h>
int main (){
    int i, j, k;
    int n = 5;
    for(i=n; i>0; i--){
       for(j=1;j<=n-i;j++){
           printf(" ");
       }
       int temp = 65;
       for(k=1;k<=2*i-1;k++){
           printf("%c",temp++);
       }
        printf("\n");
    }
    return 0;
}
