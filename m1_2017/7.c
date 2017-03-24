#include <stdio.h>


int main()

{

float a;

float b;

char c;

float x;

int i;

int y;

printf("Vvedite primer\n");

scanf("%f%c%f", &a, &c, &b);

switch(c){

case '+':

x=a+b;

break;

case '-':

x=a-b;

break;

case '*':

x=a*b;

break;

case '/':

x=a/b;

break;

case '%':

x=a/100*b;

break;

case '^':

x=1;

for(i=1;i<=b;++i)

x=x*a;


break;

}

printf("x= %.2f", x);

return 0;

}
