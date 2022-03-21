#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){ 
    

    int num,guess,nguesses=1;
    srand(time(0));
    num= rand() % 100 + 1;
  // printf("the number is %d \n",num);
   
   printf("guess the number between 1 to 100\n");
   do
   {
       scanf("%d",&guess);
      if (guess<num)
      {
          printf("higher number please\n");

      }
      else if (guess>num)
      {
          printf("lower number please \n ");
      }
      else
      {
          printf("you got it in \n%d \n",nguesses);
      }
      nguesses++;

   } while(guess!=num);
   
    return 0;
}