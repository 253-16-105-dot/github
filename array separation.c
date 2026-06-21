#include <stdio.h>

int main() {
    int n, i;
    int x = 0, y = 0;

    printf("Enter list capacity: ");
    scanf("%d", &n);

    int a[n], X[n], Y[n];

    printf("Enter elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++) {
        if (a[i] > 25 || a[i] % 4 == 0) {
            X[x] = a[i];
            x++;
        } else {
            Y[y] = a[i];
            y++;
        }
    }

    printf("\nX = ");
    for (i = 0; i < x; i++) {
        printf("%d ", X[i]);
    }

    printf("\nY = ");
    for (i = 0; i < y; i++) {
        printf("%d ", Y[i]);
    }

    printf("\n");

    return 0;
}
