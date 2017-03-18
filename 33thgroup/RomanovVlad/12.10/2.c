#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 20


int arr[N];

int get_min_item(int *a, int n, int min)
{
	min = a[0];
	int z;
	for (int i=0; i < N; i++){
	  if (a[i] < min)
	    min = a[i];
	    printf("%4d\n",min);}
		z=min;
		return z;
}

int main(int argc, char **argv)

{
	int b;
	int c=0;
	srand(time(NULL));
	for (int i=0; i < N; i++)
	arr[i] = rand ()%1000;
	for (int i=0; i < N; i++)
	  printf("%4d ",arr[i]);
	  printf("\n");
	c=get_min_item(arr,N,b);
	
    printf("min: %4d ",c);   

	return 0;

}

