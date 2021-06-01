#include<stdio.h>
#include<math.h>
int main()
{
int num,originalNum,remainder,result=0;
printf("enter a three digit integer:");
scanf("%d",&num);
originalNum=num;
  {

      while(originalNum!=0)
         {
             remainder=originalNum%10;
             result +=pow(remainder,3);
             originalNum/=10;
         }
      if (result==num)
         {
           printf("%d is armstrong\n",num);
         }
      else
        {
      printf("%d is not an armstrong no.\n",num);
        }
   }

}
