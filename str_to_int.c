#include <stdio.h>
int strtoint(char[]);
int main()
{
    int value;
    char str[20];
    printf(" enter string that you convert to integer");
    scanf("%s", &str);
    value = strtoint(str);
    printf("equvalant integer formate %d",value);
    return 0;
}
int atrtoint(char str[])
{
    int i = 0, sum = 0;
    while (str[i] != 0)
    {
        if (str[i] < 48 || str[i] > 57)
        {
            printf("not able to convert str to int ");
        }
        else
        {
            sum = sum * 10 + (str[i] - 48);
        }
    }
    return sum;
}