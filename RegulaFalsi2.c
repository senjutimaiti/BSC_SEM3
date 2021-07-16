#include<stdio.h>
#include<math.h>
#include<stdlib.h>
double f1(double x)
{
	return x*x*x-8*x-4;
}
double hn(double a,double b)
{
	double x,y;
	x=fabs(f1(a));
	y=fabs(f1(b));
	return x*(b-a)/(y+x);
}
RegFal()
{
	int f=0,n=1;
	double a=0,b=0,i,c,diff;
	for(i=-1;((a==0.0 || b==0.0) && i<=10);i+=0.01)
	{
		if (f1(i)<0)
			a=i;
		else if(f1(i)>0)
			b=i;
	}
	//printf("\na=%f\nb=%f\n",a,b);
	printf("\na\t\tb\t\tf(a)\t\tf(b)\t\th\t\tx\t\tf(x)\n");
		do
		{
			c=a+hn(a,b);
			printf("\n%.8f\t%.8f\t%.8f\t%.8f\t%.8f\t%.8f\t%.8f",a,b,f1(a),f1(b),hn(a,b),c,f1(c));
			if(f1(c)<0)
				a=c;
			else if(f1(c)>0)
				b=c;
			else if(f1(c)==0)
			{
				printf("\n\nThe root of function 1 = %.4f\n",c);
				f=1;
				break;
			}
		}
		while(fabs(a-b)>=0.0001);
		if(f==0)
			printf("\n\nThe root of function 1 = %.4f\n",c);
}
int main(void)
{
	printf("find the root of the functions are:\n1. x^3 - 8x - 4 = 0 (upto 4 decimal places)\n");
	RegFal();
}
