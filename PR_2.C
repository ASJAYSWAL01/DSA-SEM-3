#include <stdio.h>
void printArray(int *arr, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf(" %d ", *(arr + i * cols + j));
        }
        printf("\n");
    }
}

int main()
{
    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int arrRowMajor[rows][cols];
    int arrColMajor[rows][cols];

    printf("Enter the array elements:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &arrRowMajor[i][j]);
            arrColMajor[j][i] = arrRowMajor[i][j];
        }
    }

    printf("\nRow Major Order:\n");
    printArray((int *)arrRowMajor, rows, cols);

    printf("\nColumn Major Order:\n");
    printArray((int *)arrColMajor, cols, rows);

    return 0;
}