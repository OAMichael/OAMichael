#include <TXLib.h>
#include <stdio.h>
#include <math.h>
main( )
{
    float D,x1,x2,a,b,c;

    printf("Enter a coefficient \n");
    scanf("%f",&a);
    printf("Enter b coefficient \n");
    scanf("%f",&b);
    printf("Enter c coefficient \n");
    scanf("%f",&c);
    if (a==0)
    {
        if (b==0)
        {
            if (c==0)
            {
            printf("There are many solutions");
            }
            if (c!=0)
            {
            printf("There is no solution");
            }
        }
        if (b!=0)
        {
        printf("There is only one solution x=%f", -c/b);
        }
    }
    if (a!=0)
    {
        D=b*b-4*a*c;
        if (D<0)
        {
            printf("There is no solution");
        }
        if (D==0)
        {
            printf("There is only one solution x=%f", -b/2/a);
        }
        if (D>0)
        {
            x1=(-b-sqrt(D))/(2*a);
            x2=(-b+sqrt(D))/(2*a);
            printf("There are two solutions: %f and %f", x1 , x2);
        }
    }
}
