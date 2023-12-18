#include <stdio.h>
#include <stdlib.h> // Include this header for system()

void selection_sort(); // Function declaration.

int a[50], n;

int main() {
    int i;

     

    printf("\nEnter size of an array: ");
    scanf("%d", &n);

    printf("\nEnter elements of an array:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    selection_sort();

    printf("\n\nAfter sorting:\n");
    for (i = 0; i < n; i++)
        printf("\n%d", a[i]);

    getchar(); // Instead of getch() for standard input

    return 0; // Return 0 as required by main()
}

void selection_sort() {
    int PASS, MIN_INDEX, I, temp;
    for (PASS = 0; PASS < n - 1; PASS++) {
        MIN_INDEX = PASS;
        for (I = PASS + 1; I < n; I++) {
            if (a[I] < a[MIN_INDEX])
                MIN_INDEX = I;
        }

        temp = a[PASS];
        a[PASS] = a[MIN_INDEX];
        a[MIN_INDEX] = temp;
    }
}
