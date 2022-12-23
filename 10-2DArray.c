#include <stdio.h>
#include <stdlib.h>

void main()
{
    int i, j, row, col, *ptr;
    printf("Enter size of row and column\n");
    scanf("%d%d", &row, &col);
    ptr = (int*)malloc((row*col)* sizeof(int));

    printf("Enter elements of 2D array\n");
    for(i = 0; i<row; i++)
    {
        for(j = 0; j<col; j++)
            scanf("%d", &ptr[i*col + j]);
    }

    printf("Array elements are -\n");
    for(i = 0; i<row; i++)
    {
        for(j = 0; j<col; j++)
            printf("%d\t", ptr[i*col + j]);
        printf("\n");
    }
}