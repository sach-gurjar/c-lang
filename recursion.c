#include <stdio.h>
int factorial(int x)
{
    if (x == 1 || x == 0)
    {
        return 1;
    }
    else
    {
        return x * factorial(x - 1);
    }
}

int main()
{
    int a;
    printf("enter value which you want to find a factorail \n");
    scanf("%d", &a);
    printf("the value of function  %d is %d  ", a, factorial(a));

    return 0;
}