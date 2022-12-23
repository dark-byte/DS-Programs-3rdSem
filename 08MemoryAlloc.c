#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n, n2, i, *ptr, *ptr2;
    printf("Enter size of array\n");
    scanf("%d", &n);
    ptr = (int*)malloc(n*sizeof(int));

    if(ptr == NULL)
    {
        printf("Memory not allocated\n");
        exit(0);
    }

    printf("Enter elements of array 1\n");
    for(i = 0; i<n; i++)
        scanf("%d", &ptr[i]);
    
    printf("Array elements allocated using Malloc -\n");
    for(i = 0; i<n; i++)
        printf("%d\t", ptr[i]);

    ptr2 = (int*)calloc(n, sizeof(int));

    if(ptr2 == NULL)
    {
        printf("\nMemory not allocated\n");
        exit(0);
    }

    printf("\nEnter elements of array 2\n");
    for(i = 0; i<n; i++){
        scanf("%d", &ptr2[i]);
    }

    printf("Array elements allocated using Calloc -\n");
    for(i = 0; i<n; i++)
        printf("%d\t", ptr2[i]);

    printf("\nEnter new size of array\n");
    scanf("%d", &n2);
    ptr = (int*)realloc(ptr, n2*sizeof(int));

    printf("Enter elements of reallocated array\n");
    for(i = 0; i<n2; i++)
        scanf("%d", &ptr[i]);
    
    printf("Array elements of reallocated array -\n");
    for(i = 0; i<n2; i++)
        printf("%d\t", ptr[i]);
    
    free(ptr);
    free(ptr2);
    printf("\nMemory successfully freed\n");


}