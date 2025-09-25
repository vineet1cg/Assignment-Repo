#include <stdio.h>

int main() {
    int n;
    printf("Enter an odd number for size of square: ");
    scanf("%d", &n);

    if(n % 2 == 0) {
        printf("Please enter an odd number.\n");
        return 1;
    }

    int i, j;
    int center = (n + 1) / 2;

    for(i = 1; i <= n; i++) {
        for(j = 1; j <= n; j++) {
            if(i == 1 || i == n || j == 1 || j == n) {
                printf("*");
            }
            else if(i == center && j == center) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
