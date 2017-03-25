#include <stdio.h>
#include <string.h>

int main()
{
int a[1000];
int i,z;
char c[1000];
gets(c);
int s=0;
int j=0;
for(i=0;c[i]!='\0';i++)
{
                   if(c[i]==' ')
                         {
                             if(j==0)
                                   {
                                    a[j]=i;
                                      j++;
                                       s=i;

                                    }
                              else {
                              a[j]=i-(s+1);
                               j++;
                                 s=i;
                                   }
                            }
                  else
                        if(c[i+1]=='\0')
                               {
                                     a[j]=i-s;
                                        j++;
                                  }
       }
for(i=0;i<j;i++)
{
for(z=0;z<a[i];z++)
{printf("-");}
printf("\n");
}
return 0;
}
