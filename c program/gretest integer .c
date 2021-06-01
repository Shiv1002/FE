#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter no.s :\n");
    scanf("%d%d%d",&a,&b,&c);
      if (a>b)
       {
           if (a>c)
             {
              printf("%d is greatest integer\n",a);
             }
           else{
               printf("%d is largest",c);
               }
       }
      else
       {
            if (c>b)
              {
                printf("%d is greatest integer\n",c);
              }
            else
              {
                      printf("%d is largest",b);
              }
        }

}
