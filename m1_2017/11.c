#include <stdio.h>
#include <string.h>
#include <math.h>
int f(char *a)
{
    int i,j,m=0;
    j=strlen(a)-1;

    for(i=0;a[i]!='\0';++i)
    {
          if(a[i]=='1')
                 m=m+pow(2,j);
                 j--;
               }
return m;
}

int main()
{
    char s[1000];
    printf("Vvedite chislo v dvoichnom vide\n");
    gets(s);
    printf("V desatichnom: %i\n", f(s));

    return 0;
}
