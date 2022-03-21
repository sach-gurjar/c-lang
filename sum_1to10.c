#include <stdio.h>

int main()
{

    int i, sum = 0;
    int n;
    scanf("  enter num %d", &n);

    for (i = 0; i <= n ;i++)
    {
        sum += i;
    }
    printf("sum of (1 to %d) is =%d\n",n, sum);
    return 0;
}