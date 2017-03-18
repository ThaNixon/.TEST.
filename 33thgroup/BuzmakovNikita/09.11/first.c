#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char** argv)

{
	FILE *fp;
	fp = fopen ("C:\\KIISK\\33thgroup\\BuzmakovNikita\\09.11\\TEST.txt","r");
	/*int k=0;*/ 
	while (1)
		{
		int ch = getc(fp);
		if (ch == EOF) break;
		printf("%c",(char)ch);
		if ((char)ch == '('){
			printf("\n");
			k++;}
		if ((char)ch == ')'){
			printf("\n");
			k--;}
		}

printf
	
	fclose(fp);
	return 0;
	
}

