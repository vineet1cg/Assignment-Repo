#include<stdio.h>
int main (){
    int i , j , k;
    int n = 7;
    for(i=n;i>0;i--){
        for(j=1;j<=2*n-1;j++){
            if(i==n || i+j==n+1 || i==j-(n-1) ){printf("*");}
            else{printf(" ");}
        }
        printf("\n");
    }
}