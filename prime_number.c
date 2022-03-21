#include <stdio.h>

int main()
{

    int n, prime = 1;
    printf("enter a number which you want to find a number is prime or not \n ");
    scanf("%d", &n);
    for (int i = 2; i < n; i++)
    {
        if (n % 2 == 0)
        {
            prime = 0;
            break;
        }
    }
    if (prime == 0)
    {
        printf("this is not a prime number  ! ");
    }
    else
    {
        printf("this is a prime number ");
    }
    return 0;
}