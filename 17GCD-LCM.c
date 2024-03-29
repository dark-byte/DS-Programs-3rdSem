#include <stdio.h>

int gcd(int x, int y)
{
    if(y == 0)
        return x;
   
    else 
        return gcd(y, x%y);
}

void main()
{
   int num1, num2, hcf, lcm;

   printf("Enter 2 numbers\n");
   scanf("%d%d", &num1, &num2);

   hcf = gcd(num1, num2);
   printf("GCD: %d\n", hcf);
   printf("LCM: %d\n", (num1 * num2) / hcf);
}
