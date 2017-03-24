#include <stdio.h>


int main()

{

int a;

printf("Vvedite tseloe neotritsatelnoye chislo\n");

scanf("%i", &a);

int i=1;

int x=1;

for(i=1;i<=a;i=i+1)

{

x=x*i;

}

printf("Factorial: %i\n", x);

return 0;

}
