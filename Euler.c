#include<stdio.h>
#include<math.h>
#include<stdlib.h>
float f1(float x,float y)
{
	return (x*x*x+y);
}
void euler()
{
    float x0,y0,x,y,h,xn;
    printf("\nEnter x0,y0,h,xn:\n");
    scanf("%f",&x0);
    scanf("%f",&y0);
    scanf("%f",&h);
    scanf("%f",&xn);
    x=x0;
    y=y0;
    printf("\n  x\t  y\n");
    while(x<xn)
    {
        y=y+h*f1(x,y);
        x=x+h;
        printf("%0.4f\t%0.4f\n",x,y);
    }
}
main()
{
	euler();
}
