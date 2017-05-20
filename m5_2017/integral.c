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
    setlocale(LC_ALL,"Rus");
    printf("Функция y=7x\nВведите начало диапазона\n");
    scanf("%lf",&o1);
    printf("Введите конец диапазона\n");
    scanf("%lf",&o2);
    printf("Введите  количество разбиений (примерно 100000)\n");
    scanf("%i",&d);
    printf("интеграл = %lf\n",integral(o1,o2,d));
    return 0;
}
