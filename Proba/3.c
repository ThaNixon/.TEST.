#include <stdlib.h>
#include <math.h>
#include <stdio.h>


int main()

{
	int N;
	printf("N=");
	scanf("%d",&N);
	printf("\n");
	if ((N>100)||(N<2))
	printf("Error");
	for (int i=2;i<100;i++){
		if ((N % i)== 0)
		printf("%2d",i);
	}
	printf("\n");
}

