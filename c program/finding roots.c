#include<stdio.h>
#include<math.h>
void main()
{
    double a,b,c,root1,root2,disc,real,imaginary;
    printf("enter coefficient a,b and c:");
    scanf("%lf%lf%lf",&a,&b,&c);
    disc = b*b - 4*a*c;
    if (disc>0)
     {
            printf("roots are real and distinct\n");
            root1=(-b+sqrt(disc))/2*a , root2=(-b-sqrt(disc))/2*a;
            printf("root1 and root2 of equation is %.2lf and %.2lf\n",root1,root2);

     }
     else if(disc==0)
     {
            printf("roots are real and equal\n");
            root1=root2=(-b)/2*a;
            printf("%.2lf is root of equation",root1);
     }

    else
    {
        printf("roots are imaginary\n");
        real=-b/2*a , imaginary=sqrt(-disc)/2*a;
        printf(": root1=%.2lf + %.2lfi \n: root2=%.2lf - %.2lfi ",real,imaginary,real,imaginary);
    }

}
