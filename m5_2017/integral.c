#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
float f(float x)
{
    float y;
    y=7*x;
    return(y);
}
double integral(double a, double b, int n)
{
    int i=1;
    double c=0.0, ig=0.0, s=0.0, s1=0.0, r=0.0;
    r=(b-a)/n;
    c=a;
    do {
            c=c+r;
                if(i%2!=0)
                {
                    s=s+f(c);
                }
                else
                {
                    s1=s1+f(c);
                }
                i++;

    } while(c<b);
    ig=r/3*(f(a)+f(b)+4*s+2*s1);
    return ig;
}
int main()
{
     double o1,o2;
    int d;
    printf("Vvedite diapason cherez zapatyu\n");
    scanf("%lf,%lf",&o1, &o2);
    printf("Vvedite kolichestvo razbieniy\n");
    scanf("%i",&d);
    printf("integral= %lf\n",integral(o1,o2,d));
    return 0;
}
