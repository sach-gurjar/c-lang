
#include"stdio.h"
int main()
{
    int x,sum=0,rem;
    printf("enter num ");
    sacnf ("%d",&x);
    while(x!=0)
    {
        rem=x%10;
        sum=sum+rem;
        x=x/10;
    }
    printf("sum is %d %d",x,sum);
    return 0;
}
