#include <stdio.h>
#include <stdlib.h> // Include this header for system()

void bubble_sort(int a[], int n); // Function declaration.

int main() {
    int a[50], n, i;

    printf("\nEnter size of an array: ");
    scanf("%d", &n);

    printf("\nEnter elements of an array:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    bubble_sort(a, n); // Function calling.

    printf("\n\nAfter sorting:\n");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    printf("\n");
    system("pause"); // To pause and view the output in Windows.
    return 0;
}

void bubble_sort(int a[], int n) { // Function definition.
    int j, k, temp;
    for (j = 0; j < n - 1; j++) {
        for (k = 0; k < n - 1 - j; k++) {
            if (a[k] > a[k + 1]) {
                temp = a[k];
                a[k] = a[k + 1];
                a[k + 1] = temp;
            }
        }
    }
}
