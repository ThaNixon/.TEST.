#include <stdio.h>
#include <stdlib.h> 

int strlen(const char *s)
{
	int l=0;
		while (*s!=0) 
		{
		s++;
		l++;
		}
	   return l;
 }
	
int main()

{
	printf("%d\n",strlen("hahaha"));
	return 0;
 
}

