#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n, i, *ptr;
    printf("Enter size of array\n");
    scanf("%d", &n);
    ptr = (int*)malloc(n*sizeof(int));

    if(ptr == NULL)
    {
        printf("Memory not allocated\n");
        exit(0);
    }

    printf("Enter elements of array \n");
    for(i = 0; i<n; i++)
        scanf("%d", &ptr[i]);
    
    printf("Array elements allocated using Malloc -\n");
    for(i = 0; i<n; i++)
        printf("%d\t", ptr[i]);

}