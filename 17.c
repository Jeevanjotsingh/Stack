// input and output in 2d array
#include <stdio.h>
void main()
{
    int r, c, i, j;
    printf("Enter the number of rows and columns: ");
    scanf("%d%d", &r, &c);
    int arr[r][c];
    printf("Enter your elements: ");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
            scanf("%d", &arr[i][j]);
    }
    printf("Matrix:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }
}