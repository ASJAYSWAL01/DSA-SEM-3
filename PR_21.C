#include<stdio.h>
#include<conio.h>

void quick_sort(int [], int, int);

int main() {
    int a[50], n, i;

    

    printf("\nHow many elements you want to sort: ");
    scanf("%d", &n);

    printf("\nEnter %d values:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("\nBefore sort:");
    for (i = 0; i < n; i++)
        printf("%4d", a[i]);

    quick_sort(a, 0, n - 1);

    printf("\nAfter sort:");
    for (i = 0; i < n; i++)
        printf("%4d", a[i]);

    getch();
}

void quick_sort(int a[], int LB, int UB) {
    int i, j, key, temp;

    if (LB < UB) {
        key = LB;
        i = LB;
        j = UB + 1;

        while (i < j) {
            do {
                i++;
            } while (a[i] <= a[key] && i < UB);

            do {
                j--;
            } while (a[j] > a[key]);

            if (i < j) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }

        temp = a[key];
        a[key] = a[j];
        a[j] = temp;

        quick_sort(a, LB, j - 1);
        quick_sort(a, j + 1, UB);
    }
}
