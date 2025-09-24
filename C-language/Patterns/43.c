#include<stdio.h>
int main (){
    int i , j , k ;
    int n = 4;
    int m = 7;
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            if( i == 1|| j==1 || i==n || j==m){
                printf("%d",j);
                
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}