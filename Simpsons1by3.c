#include<stdio.h>
#include<math.h>
#include<stdlib.h>
float y(float x)
{
	float b=1+x;
	b=b*b;
	return 1/b;
}
simpson()
{
	float h,yi=0,yi2=0,yi3=0,x=0,I;
	float a=0,b=1,n=6;
	h=(b-a)/n;
	printf("x\t\ty=f(x)\t\tyi(=y0+yn)\tyi2(=y1+y3..)\tyi3(=y2+y4..)\n\n");
	int i=0;
	while(i<=n)
	{
		printf("%f\t%f",x,y(x));
		if(i==10 || i==0)
		{
			yi=yi+y(x);
			printf("\t%f\n",y(x));
		}
		else if(i%2==1)
		{
			yi2=yi2+y(x);
			printf("\t\t\t%f\n",y(x));
		}
		else
		{
			yi3=yi3+y(x);
			printf("\t\t\t\t\t%f\n",y(x));
		}
		i++;
		x=x+h;
	}
	printf("-------------------------------------------------------------------------\n");
	printf("Sum:\t\t\t\t%f\t%f\t%f\n",yi,yi2,yi3);
	I=(h/3)*(yi+4*yi2+2*yi3);
	printf("\nIntegration of (4x-3x^2)dx with limit from 0 to 1 = %.4f\n",I);
}
main()
{
	simpson();
}
