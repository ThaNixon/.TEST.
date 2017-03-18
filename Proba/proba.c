#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define n 10
int main()
  {
int a[n],i,max,min, b, c,ma;
for (i=0;i<n;i++)
  {
  a[i]=-99+rand()%199;
  printf("%3d",a[i]);
  }
   min=a[0];
   max=a[0];
for (i=0;i<n;i++)
{
     if (a[i]>max)
     {
     max=a[i];
     c=i;
     }
 if (a[i]<min)
 {
 min=a[i];
 b=i;
 }
}
printf("\n");
printf("max= %3d\n",max);
printf("min= %3d\n",min);
ma=a[b];
a[b]=a[c];
a[c]=ma;
for (i=0;i<n;i++)
printf ( "%3d",a[i]);

return 0;
}
