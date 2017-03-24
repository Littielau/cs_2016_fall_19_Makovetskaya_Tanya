#include <stdio.h>


int main(void)
{

float a;

float b;

float c;

float d;

float m;

float z;

printf("Vvedite pervoe chislo v formate a+bi\n ");

scanf("%f+%fi", &a, &b);

printf("Vvedite vtoroe chislo v formate a+bi\n ");

scanf("%f+%fi", &c, &d);

m = (a*a*c+a*c*c+a*d*d+c*b*b)/((a+c)*(a+c)+(b+d)*(b+d));

z = (a*a*d+c*c*b+b*d*d+b*b*d)/((a+c)*(a+c)+(b+d)*(b+d));

printf("Polycheno chislo\n ");

printf("%.2f+%.2fi", m, z);


return 0;

}
