#include <stdio.h>

void main()
{
    int sparse[10][10], triplet[10][3], rows, cols, i, j, l = 1, count = 0;
    printf("Enter number of rows and columns of sparse matrix-\n");
    scanf("%d%d", &rows, &cols);

    printf("Enter elements of sparse matrix-\n");
    for(i = 0; i<rows; i++)
    {
        for(j = 0; j<cols; j++)
            scanf("%d", &sparse[i][j]);
    }

    for(i = 0; i<rows; i++)
    {
        for(j = 0; j<cols; j++)
        {
            if(sparse[i][j] != 0)
            {
                triplet[l][0] = i;
                triplet[l][1] = j;
                triplet[l][2] = sparse[i][j];
                l++;
                count++;
            }
        }
    }

    triplet[0][0] = rows;
    triplet[0][1] = cols;
    triplet[0][2] = count;
    
    printf("Triplet representation is\n");
    for(i = 0; i<rows; i++)
    {
        for(j = 0; j<cols; j++)
        {
            printf("%d\t", triplet[i][j]);
        }
        printf("\n");
    }

}