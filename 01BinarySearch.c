#include <stdio.h>

void main()
{
    int  a[10], i, n, high, low, mid, key, flag = 0;

    printf("Enter number of elements in array\n");
    scanf("%d", &n);

    printf("Enter elements of array\n");
    for(i = 0; i<n; i++)
        scanf("%d", &a[i]);

    printf("Enter key to be searched\n");
    scanf("%d", &key);
    
    high = n-1;
    low = 0;

    while(high>=low)
    {
        mid = (high + low)/2;
        if(a[mid] == key)
        {
            flag = 1;
            break;
        }
        else if(key>a[mid])
            low = mid +1;
        else 
            high = mid -1;
    }

    if(flag == 0)
        printf("Key not found!\n");
    else
        printf("Key found at index %d\n", mid);

}