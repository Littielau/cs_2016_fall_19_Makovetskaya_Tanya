#include <stdio.h>

#include <math.h>

int main()
{
float a,b,c;

printf("Vvedite koeffitsienty cherez zapatyu\n");

scanf("%f,%f,%f", &a, &b, &c);

float d=b*b-4*a*c;

if (d>0) {

float x1=(-b+sqrtf(d))/2*a;

float x2=(-b-sqrtf(d))/2*a;

printf("x1=%.2f, x2=%.2f", x1, x2);
}

if (d==0)
    {
float x=-b/2*a;

printf("x=%.2f", x);
}
if (d<0)
    {
printf("korney net\n");
}


return 0;

}
