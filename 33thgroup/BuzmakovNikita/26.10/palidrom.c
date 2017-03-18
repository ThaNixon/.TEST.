#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()

{ 
	char s[100];
	printf("Wedite slovo: ");
	int size;
	 for (int i=0; i<100; i++)
	 s[i]=0;
	 scanf("%s",s);
	 size=strlen(s);
	 int b=0;
	 for(int i=0; i<size/2; i++)
		if(s[i]!=s[size-i-1])
		b=1;
		if (b==1)
		printf("Ne Palidrom");
		else printf("yavlyaetsya im "); 
			return 0;
}

