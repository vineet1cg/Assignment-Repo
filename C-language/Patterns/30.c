#include<stdio.h>
int main (){
    int i, j, k;
    int n = 5;
    for(i=1; i<=n; i++){
        for(j=1; j<=n-i; j++){
            printf(" ");
        }
        
        for(k=1; k<=i; k++){
            printf("%c", 'A' + k - 1);
        }
        
        for(k=i-1; k>=1; k--){
            printf("%c" , 'A' + k - 1);
        }
        printf("\n");
    }
    for(i=n-1; i>0; i--){
        for(j=1; j<=n-i; j++){
            printf(" ");
        }
        
        for(k=1; k<=i; k++){
            printf("%c", 'A' + k - 1);
        }
        
        for(k=i-1; k>=1; k--){
            printf("%c", 'A' + k - 1);
        }
        printf("\n");
    }
    return 0;
}
