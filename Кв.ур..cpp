#include <TXLib.h>
#include <stdio.h>
#include <math.h>
main( )
{
    float D,x1,x2,a,b,c;

    printf("Введите коэффициент a \n");
    scanf("%f",&a);
    printf("Введите коэффициент b \n");
    scanf("%f",&b);
    printf("Введите коэффициент c \n");
    scanf("%f",&c);
    if (a==0)
    {
        if (b==0)
        {
            if (c==0)
            {
            printf("Корней бесконечно много");
            }
            if (c!=0)
            {
            printf("Корней нет");
            }
        }
        if (b!=0)
        {
        printf("Корень всего один x=%f", -c/b);
        }
    }
    if (a!=0)
    {
        D=b*b-4*a*c;
        if (D<0)
        {
            printf("Корней нет");
        }
        if (D==0)
        {
            printf("Есть всего один корень x=%f", -b/2/a);
        }
        if (D>0)
        {
            x1=(-b-sqrt(D))/(2*a);
            x2=(-b+sqrt(D))/(2*a);
            printf("Есть два корня: %f и %f", x1 , x2);
        }
    }
}
