#include <stdio.h>
//int name(int a);
int name(int a)
{
    int ret;
    ret = a + 15;
    return ret;
}
int main()
{
    int c;

    c = name(5);
    printf("change the value %d", c);
    return 0;
}
