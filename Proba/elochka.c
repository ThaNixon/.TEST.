#include <stdio.h>

int main(int argc, char** argv)

{
	int s;
	int i,j;
	 printf("wedite razmer= ";
	 scanf("%d",&s);
	  for (i=1; i<=s; i++)
	{
		 for(j=1; j<=(s+i); j++)
		 { if (j<=(s-i+1))
		 putchar(' ');
		 else 
		 putchar('*');
		 }	 
	putchar('\n');
}

