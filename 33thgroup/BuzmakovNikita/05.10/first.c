//	matrica.c

#include <stdio.h>
#include <stdlib.h>

int main ()

{
	char a[10][10];
	for (int i=0;i<10;i++){
	for (int j=0;j<10;j++){
	a[i][j]=rand()%100;
}
}
	for (int i=0;i<10;i++){
	printf("\n");	
	for (int j=0;j<10;j++){	
	printf("%3d",a[i][j]);
}
}

}

