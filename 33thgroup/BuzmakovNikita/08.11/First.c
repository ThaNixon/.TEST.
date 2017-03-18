#include <stdio.h>
int main(int argc, char** argv)
{
FILE *fp;
fp = fopen ("C:\\KIISK\\33thgroup\\BuzmakovNikita\\08.11\\file.txt", "w");
For (char c='A';c<='Z';c++)
putc(c,fp);
fclose(fp);
fp = fopen ("C:\\KIISK\\33thgroup\\BuzmakovNikita\\08.11\\file.txt", "a");
for (char c='a'; c<='z';c++)
putc(c,fp);
fclose(fp);
return 0;
}

