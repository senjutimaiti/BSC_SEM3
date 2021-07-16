#include<stdio.h>
#include<math.h>
#include<stdlib.h>
double f1(double x)
{
	return x*x*x+2*x-2;
}
double hn(double a,double b)
{
	double x,y;
	x=(f1(a));
	y=(f1(b));
	return x*(b-a)/(y-x);
}
RegFal()
{
	int f=0;
	double a=0,b=0,i,c,diff;
	for(i=-10;((a==0.0 || b==0.0) && i<=10);i+=0.1)
	{
		if (f1(i)<0)
			a=i;
		else if(f1(i)>0)
			b=i;
	}
	printf("\na=%f\nb=%f\n",a,b);
		do
		{
			c=a-hn(a,b);
			//printf("\n%f\n",c);
			if(f1(c)<0)
				a=c;
			else if(f1(c)>0)
				b=c;
			else if(f1(c)==0)
			{
				printf("The root of function 1 = %.4f\n",c);
				f=1;
				break;
			}
		}
		while(fabs(a-b)>=0.0001);
		if(f==0)
			printf("The root of function 1 = %.4f\n",c);
}
int main(void)
{
	printf("find the root of the functions are:\n1. 10x + sinx + 2x = 0 (upto 4 decimal places)\n");
	RegFal();
}
