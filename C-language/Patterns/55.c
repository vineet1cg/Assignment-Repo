#include<stdio.h>
int main (){
    int i , j , k , l ;
    int n = 5;
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            printf(" ");
        }
        for(k=1;k<=i;k++){
            printf("%d",k);
        }
        for(l=i-1;l>0;l--){
            printf("%d",l);
        }
        printf("\n");
    }
    for(i=n-1;i>0;i--){
        for(j=1;j<=n-i;j++){
            printf(" ");
        }
        for(k=1;k<=i;k++){
            printf("%d",k);
        }
        for(l=i-1;l>0;l--){
            printf("%d",l);
        }
        printf("\n");
    }
    return 0;
}