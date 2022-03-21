#include <stdio.h>
int sum(int a)
{

    if (a == 1 || a == 0) 

    {
        return 1;
    }
    else
    {
        return a + sum(a - 1);
    }
}
int main()
{
    int n;
    printf("enter number \n");
    scanf("%d", &n);
    printf("  %d\n", sum(n));

    return 0;
}