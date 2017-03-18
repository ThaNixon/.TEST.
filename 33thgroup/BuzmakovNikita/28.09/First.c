#include <stdio.h>
#include <stdlib.h> 
#include <time.h> 
 
int main ()
{
		srand(time(NULL));
		
		int mass[10];
		int i;
		for (i=0;i<10;i++)
		{
			mass[i]=rand()%20-10;
			printf("%d ",mass[i]);
		}
				
				
			
	return 0;		
} 
