#include<stdio.h>
#include<math.h>
#include<stdlib.h>
float y(float x)
{
	return (4*x)-(3*x*x);
}
trape()
{
	float h,yi=0,yi2=0,x=0,I;
	float a=0,b=1,n=10;
	h=(b-a)/n;
	printf("x\t\ty=f(x)\t\tyi(=y0+yn)\tyi2(=y1+y2+...+y(n-1))\n\n");
	int i=0;
	while(i<=n)
	{
		printf("%f\t%f",x,y(x));
		if(i==10 || i==0)
		{
			yi=yi+y(x);
			printf("\t%f\n",y(x));
		}
		else 
		{
			yi2=yi2+y(x);
			printf("\t\t\t%f\n",y(x));
		}
		i++;
		x=x+h;
	}
	printf("-------------------------------------------------------------\n");
	printf("Sum:\t\t\t\t%f\t%f\n",yi,yi2);
	I=(h/2)*(yi+2*yi2);
	printf("\nIntegration of (4x-3x^2)dx with limit from 0 to 1 = %f\n",I);
}
main()
{
	trape();
}
