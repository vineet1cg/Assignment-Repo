#include<stdio.h>
int main(){
    int n = 5;
    for(int i = 1; i<=n; i++){
        for(int j = 1 ; j<=n ;j++){
            if(i==j || (i+j)%2==0){
                printf("%d",1);
            }
            else{
                printf("0");
            }
        }
        printf("\n");
    }
}