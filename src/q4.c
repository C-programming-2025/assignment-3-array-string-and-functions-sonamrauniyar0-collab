// Implement a C program to find the second largest element in an array.
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    scanf("%d", &n);

    if (n < 2) {
        printf("Second largest does not exist.\n");
        return 0;
    }

    int *a = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int max1 = a[0];
    int max2 = a[1];

    if (max2 > max1) {
        int t = max1;
        max1 = max2;
        max2 = t;
    }

    for (int i = 2; i < n; i++) {
        if (a[i] > max1) {
            max2 = max1;
            max1 = a[i];
        } else if (a[i] > max2 && a[i] < max1) {
            max2 = a[i];
        }
    }

    printf("Second largest element: %d\n", max2);

    free(a);
    return 0;
}