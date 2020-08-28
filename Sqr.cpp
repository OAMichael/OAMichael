#include <TXLib.h>
#include <stdio.h>
#include <math.h>

double Quadratic( float a,           ///ѕоставил float, потому что при double и маленьких///
                  float b,           ///числах по€вл€ютс€ погрешности. ѕри  float такие  ///
                  float c,           ///погрешности не по€вл€ютс€///
                  float D,
                  float x1,
                  float x2)
{

    if (a == 0)
    {
        if (b == 0)
        {
            if (c == 0)
            printf("There are many solutions");

            else
            printf("There is no solution");
        }
        else
        printf("There is only one solution x=%g", - c / b);
    }
    else
    {
        D = b * b - 4 * a * c;
        if (D < 0)
        printf("There is no solution");

        else
        {
            if (D == 0)
            printf("There is only one solution x=%g", - b / (2 * a));

            else
            {
                x1 = (- b - sqrt(D)) / (2 * a);

                x2 = (- b + sqrt(D)) / (2 * a);

                printf("There are two solutions: %g and %g", x1 , x2);
            }

        }
    }
        return 0;
}
int main( )
{
    float a = 0 ;
    float b = 0;
    float c = 0;
    float D = 0;
    float x1 = 0;
    float x2 = 0;

    printf("Enter a coefficient \n");
    scanf("%g",&a);

    printf("Enter b coefficient \n");
    scanf("%g",&b);

    printf("Enter c coefficient \n");
    scanf("%g",&c);

    Quadratic(a, b, c, D, x1, x2);

    return 0;
}
