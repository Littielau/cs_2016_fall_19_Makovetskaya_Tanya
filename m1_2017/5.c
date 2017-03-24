#include <stdio.h>


int main()

{

float a;

float b;

printf("Vvedite diapazon temperatur v formate a-b:\n");

scanf("%f-%f", &a, &b);

float i=a;

for(i=a;i<=b;i=i+1)

{

float x=i*1.8+32;

printf("C: %.2f, F: %.2f\n", i, x);

}

return 0;

}
