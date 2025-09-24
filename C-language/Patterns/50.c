#include<stdio.h>
int main(){
    int n = 5;
    int counter = n*(n+1)/2;
    for(int i = 1; i<=n ; i++){
        for(int j=1; j<=i ; j++){
            printf("%d",counter);
            counter--;
        }
        printf("\n");
    }
    return 0;
}
