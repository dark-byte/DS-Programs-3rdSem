#include <stdio.h>

void main()
{
    int sparse[10][10], tsparse[10][10], triplet[10][3], rows, cols, i, j, temp, l = 1, count = 0;
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
            tsparse[j][i] = sparse[i][j];
    }

    printf("Transpose of matrix is -\n");
    for(i = 0; i<cols; i ++)
    {
        for(j = 0; j<rows; j++)
        {
            printf("%d\t", tsparse[i][j]);
        }
        printf("\n");
    }

    for(i = 0; i<cols; i++)
    {
        for(j = 0; j<rows; j++)
        {
            if(tsparse[i][j] != 0)
            {
                triplet[l][0] = i;
                triplet[l][1] = j;
                triplet[l][2] = tsparse[i][j];
                l++;
                count++;
            }
        }
    }

    triplet[0][0] = cols;
    triplet[0][1] = rows;
    triplet[0][2] = count;
    
    printf("Triplet representation of transposed matrix is\n");
    for(i = 0; i<rows; i++)
    {
        for(j = 0; j<cols; j++)
        {
            printf("%d\t", triplet[i][j]);
        }
        printf("\n");
    }

}