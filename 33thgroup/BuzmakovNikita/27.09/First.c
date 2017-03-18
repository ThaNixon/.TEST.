#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char** argv)

{
srand(time(NULL));
int min,max;
int mass[20];
int i;

for(i=0;i<20;i++)
{
mass[i]=rand()%20-10;
printf("%d ",mass[i]);
}
min= mass[0];
max= mass[0];
for(i=0;i<20;i++)
{
if (max>mass[i])
{
max=mass[i];
}
if (min<mass[i]){
min=mass[i];
}
}
printf("\n max= %d ",min);
printf("\n min= %d ",max);

return 0;

}
