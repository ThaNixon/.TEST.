#include <stdio.h>
#include <math.h>


float perimetr(int x1,y1,x2,y2,x3,y3)

{
	float a=sqrt(sqr(x2-x1)+sqr(y2-y1));
	float b=sqrt(sqr(x3-x1)+sqr(y3-y2));
	float c=sqrt(sqr(x1-x3)+sqr(y1-y3));
	p=a+b+c;
    return p;
}
	
float ploshad(int x1,y1,x2,y2,x3,y3)
{
	float a=sqrt(sqr(x2-x1)+sqr(y2-y1));
	float b=sqrt(sqr(x3-x1)+sqr(y3-y2));
	float c=sqrt(sqr(x1-x3)+sqr(y1-y3));
	s=sqrt((p/2)*(p/2-a)*(p/2-b)*(p/2-c));
	    
}    
    
int main()
{    
	printf("%f ", "%f ",p,s);
	return 0;
}

