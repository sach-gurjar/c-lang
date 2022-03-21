#include <stdio.h>

int main()
{
    float a, b, c, d;
    printf("enter four number ");
    scanf("%f %f %f %f", &a, &b, &c, &d);

    if (a > b && a > c && a > d)
    {
        printf("the greater is %f ", a);
    }
    else if (b > c && b > d)
    {
        printf("the greater is %f ", b);
    }
    else if (c > d)
    {
        printf("the greater is %f ", c);
    }
    else
    {
        printf("the greater is %f ", d);
    }
    return 0;
}