#include<stdio.h>
#include<math.h>
int main()
{
int i,num,arm1,arm2,arm3;
for(i=100;i<=999;i++)
{
    num=i;
   if(num%100!=0)
   {
       arm1=pow((num%10),3);
       num=num/10;
       arm2=pow((num%10),3);
       num=num/10;
       arm3=pow((num%10),3);
       {
           if((arm1+arm2+arm3)==i)
           {
               printf("%d is armstrong\n",i);

            }

       }

   }

}
}
