#include <stdio.h>
#include <stdlib.h>


void copy(char *c,char *x)
{ char str[1000];
FILE *C,*X;

C=fopen(c,"r");
X=fopen(x,"w");
char i;
while((i=fgetc(C))!=EOF)
{
fputc(i,X);
}
}

int main()
char a[1000],b[1000];
printf("Vvedite pyt k faily(C:\/Papka\/name.txt)");
gets(a);
printf("Kyda kopirovat (C:\/papka\/name2.txt)");
gets(b);
copy(a,b);
printf("done");
return 0;
}
