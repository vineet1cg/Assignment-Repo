#include<stdio.h>
int main (){
    int i, j, k;
    int n = 5;
    for(i=1; i<=n; i++){
        for(j=1; j<=i; j++){
            printf("%c", 'A' + j - 1);  
        }
        int temp = i - 1;
        for(k=1; k<=i-1; k++){
            printf("%c", 'A' + temp - 1);  
            temp--;
        }
        printf("\n");
    }
    return 0;
}
