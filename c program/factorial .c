#include<stdio.h>
int main()
{
    int i,num,fact=1;
    printf("enter the no. of factorial you want\n");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    printf("factorial of %d  is : %d",num,fact);

}
