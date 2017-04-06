#include <stdio.h>



int main()

{

int max,d,z,i,x,b;


char c[1000];

gets(c);

char a = c[1];

b =(int)(a);

max=b;

for(i=1;c[i]!='\0';i++)

{

a = c[i];

z=(int)(a);

if (z>max)

{

max=z;


}
}

printf("max= %c\n",(char)max);

return 0;

}
