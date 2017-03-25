#include <stdio.h>
#include <stdlib.h>

double f(double *a, int n)
{
    int i;

    double min=a[1];
    double max=a[1];
    for (i=0;i<n;i++){
        if (a[i]>max) {max=a[i];}
    if (a[i]<min) {min=a[i];}
    }
      return max-min;}
int main()

{

     int i,n;
     printf("Kolichestvo elementov\n");
    scanf("%i", &n);
    double * a = (double *)malloc(n*8);
	printf("Vvedite massiv cherez Enter: ");
	for (i = 0; i <n; i++)
		scanf("%lf", &a[i]);

	printf("raznoct: %lf\n", f(a,n));




    return 0;
}
