#include<stdio.h>
#include<math.h>
#include<stdlib.h>
float fn(float x)
{
	return (x*x*x-8*x-4);
}
float fd(float x)
{
	return (3*x*x-8);
}
float fn2(float x)
{
	return (x*tan(x)-0.4);
}
float fd2(float x)
{
	float p=1/cos(x);
	return (x*p*p+tan(x));
}
void NewRhap()
{
	float a=0,b=0,i,xnew;
	for(i=0;((b==0.0 || a==0.0) && i<=10);i+=0.1)
	{
		if (fn(i)<0)
			a=i;
		else if(fn(i)>0)
			b=i;
		else
		{
			printf("The root of function 1 = %.4f",i);
			break;
		}
	}
	//printf("\na=%f\nb=%f\n",a,b);
	if(a<b)
		xnew=a;
	else
		xnew=b;
	do
	{
		a=xnew;
		if(fd(a)==0)
			break;
		xnew=a+(-fn(a)/fd(a));
	}
	while(fabs(xnew-a) >= 0.0001);
	printf("\nThe root of function 1 = %.4f\n",xnew);
	a=0,b=0;
	for(i=-1;((a==0.0 || b==0.0) && i<=100);i+=0.1)
	{
		if (fn2(i)>0)
			a=i;
		else if(fn2(i)<0)
			b=i;
		else
		{
			printf("The root of function 1 = %.4f",i);
			break;
		}
	}
	//printf("\na=%f\nb=%f\n",a,b);
	if(a<b)
		xnew=a;
	else
		xnew=b;
	do
	{
		a=xnew;
		if(fd2(a)==0)
			break;
		xnew=a+(-fn2(a)/fd2(a));
	}
	while(fabs(xnew-a) >= 0.0001);
	printf("\nThe root of function 2 = %.4f\n",xnew);
}
int main(void)
{
	printf("find the root of the functions are:\n1. x^3 - 8x - 4=0 (upto 4 decimal places)\n2. xtanx - 0.4=0 (upto 4 decimal places)\n");
	NewRhap();
}
