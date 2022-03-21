#include <stdio.h>
int main()
{

    int b = 1, a;
    printf("product of all odd  number b/w 1 to 20 ");
    while (b <= 50)
    {
        if (b % 2 != 0)
        {
            printf("%d\n", b);
            a *= b;
        }
        b++;
    }
    printf("%d", a);

    return 0;
}