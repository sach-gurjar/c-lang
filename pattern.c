#include<stdio.h>
void pattern(int a)
{
 if(a==1)    // this is use for print 1 star 
 {
     printf("*\n");
     return;
 }
 pattern(a-1);
 for(int i=1;i<(2*a-1);i++)
 {
     printf("*");
 }
 printf("\n");

}
int main(){

    int num;
    printf("enter number ");
    scanf("%d",&num);
    pattern(num);
    return 0;
}