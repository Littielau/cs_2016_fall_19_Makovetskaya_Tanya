#include <stdio.h>
#include <stdlib.h>

void copy(char *c,char *x)
{   char str[100];
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
{
    char a[100],b[100];
    printf("name");
    gets(a);
    printf("new name");
    gets(b);
    copy(a,b);
    printf("Ok");
    return 0;
}
