#include <stdio.h>

int main() {
    int n = 5;
    int i, j;
    
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if ( (i == j) ||
                 (i + j == n + 1) ) {
                if(i <= (n+1)/2) {
                    if(i == j) {
                        printf("%d", i);
                    } else {
                        printf("%d", n - j + 1);
                    }
                } else {
                    if(i == j) {
                        printf("%d", n - i + 1);
                    } else {
                        printf("%d", j);
                    }
                }
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}
