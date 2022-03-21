#include <stdio.h>

int main()
{
    int a = 0, b;
    printf("enter num"); 
    scanf("%d", &b);
    do
    {
        printf("%d\n", a + 1);
        a++;
    } while (a < b);
    return 0;
}   