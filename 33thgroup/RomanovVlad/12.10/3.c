// srd

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 20


int arr[N];

int get_srd_item(int *a)
{
	int srd = *a;
	for (int i=0; i < N; i++)
	srd=srd+arr[i];
	srd=srd/N;
	return srd;
}

int main(int argc, char **argv)

{
	int c=0;
	srand(time(NULL));
	for (int i=0; i < N; i++)
	arr[i] = rand ()%1000;
	for (int i=0; i < N; i++)
	  printf("%4d ",arr[i]);
	  printf("\n");
	c=get_srd_item(arr);
	
    printf("srd: %4d ",c);   

	return 0;

}
