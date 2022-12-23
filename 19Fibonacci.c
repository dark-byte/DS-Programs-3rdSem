#include <stdio.h>

int fib(int n)
{
    if(n == 0 || n == 1)
        return n;
    else
        return(fib(n-1) + fib(n-2));

}

void main()
{
    int n, res;
    printf("Enter a number\n");
    scanf("%d", &n);

    res = fib(n);
    printf("Fibonacci is %d\n", res);
}