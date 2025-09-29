#include <stdio.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int top = i;
            int left = j;
            int bottom = n - 1 - i;
            int right = n - 1 - j;
            int min = top;
            if (left < min) min = left;
            if (bottom < min) min = bottom;
            if (right < min) min = right;
            printf("%d", min + 1);
        }
        printf("\n");
    }
    return 0;
}
