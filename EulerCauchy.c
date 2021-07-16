#include<stdio.h>
#include<math.h>
#include<stdlib.h>
float f1(float x,float y)
{
	//return ((2-y*y)/(5*x));
	//return (x*x+y);
	return (x+y);
	//return (1-y/x);
}
void euler()
{
    float x0,y0,x,y,h,xn,yi;
    printf("Enter x0,y0,h,xn:\n");
    scanf("%f",&x0);
    scanf("%f",&y0);
    scanf("%f",&h);
    scanf("%f",&xn);
    x=x0;
    y=y0;
    int n,r=1;
    while(x<xn)
    {
    	printf("\nFor r = %d ,xi = %f , yi = %f\n",r,x,y);
    	y=y+h*f1(x,y);
    	x=x+h;
    	n=1;
    	printf("\nxnext = %f ,first value of ynext = %f\n",x,y);
    	printf("\nn\t  x\t\t  y\n\n");
		while(1)
		{
	        yi=y0+h*(f1(x0,y0)+f1(x,y))/2;
	        if(yi==y)
	        {
	        	y=yi;
	        	break;
			}
			y=yi;
	        printf("%d\t%f\t%f\n",n,x,y);
	        n++;
		}
		x0=x;
		y0=y;
		r++;
	}
}
main()
{
	euler();
}
