#include<stdio.h>
#include<conio.h>

int main() {
    int K[15], i, KEY, j, N;



    printf("How many elements: ");
    scanf("%d", &N);

    printf("\nEnter %d data: ", N);
    for (i = 0; i < N; i++) {
        scanf("%d", &K[i]);
    }

    i = 1;

    while (i < N) {
        KEY = K[i];
        j = i - 1;

        while (j >= 0 && KEY < K[j]) {
            K[j + 1] = K[j];
            j--;
        }

        K[j + 1] = KEY;
        i++;
    }

    printf("\n\nAfter sorting:\n");
    for (i = 0; i < N; i++) {
        printf("%4d", K[i]);
    }

    getch();
}
