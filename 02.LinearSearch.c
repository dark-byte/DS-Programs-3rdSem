#include <stdio.h>

void main()
{
    int a[10], i, n, key, flag = 0;
    
    printf("Enter size of array\n");
    scanf("%d", &n);

    printf("Enter elements of array\n");
    for(i = 0; i<n; i++)
        scanf("%d", &a[i]);

    printf("Enter key to be serached\n");
    scanf("%d", &key);

    for(i = 0; i<n; i++)
    {
        if(a[i] == key)
        {
            flag = 1;
            break;
        }
    }

    if(flag == 0)
        printf("Key not found!\n");
    else
        printf("Key found at index %d\n", i);

}