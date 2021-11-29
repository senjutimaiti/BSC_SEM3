#include<stdio.h>
#include<math.h>
#include<stdlib.h>
/*double f1(double x)
{
	return (pow(10,x))+(sin(x))+(2*x);
}
double f2(double x)
{
	return (pow(x,x))+(2*x)-6;
}
void bisection()
{
	int f=0;
	double a=0,b=0,i,c,diff;
	for(i=-10;((a==0.0 || b==0.0) && i<=10);i+=0.1)
	{
		if (f1(i)>0)
			a=i;
		else if(f1(i)<0)
			b=i;
		else
		{
			printf("The root of function 1 = %.4f",i);
			f=1;
			break;
		}
	}
	//printf("\na=%f\nb=%f\n",a,b);
	if(f==0)
	{
		diff=fabs(a-b);
		while(diff>=0.0001)
		{
			c=(a+b)/2;
			if(f1(c)>0)
				a=c;
			else if(f1(c)<0)
				b=c;
			else
			{
				printf("The root of function 1 = %.4f\n",i);
				break;
			}
			diff=fabs(a-b);
		}
		printf("The root of function 1 = %.4f\n",c);
	}
	a=0.0,b=0.0;
	f=0;
	for(i=-10;((a==0.0 || b==0.0) && i<=10);i+=0.1)
	{
		if (f2(i)>0)
			a=i;
		else if(f2(i)<0)
			b=i;
		else if(f2(i)==0)
		{
			printf("The root of function 2 = %.3f",i);
			f=1;
			break;
		}
	}
	//printf("\na=%f\nb=%f\n",a,b);
	if(f==0)
	{
		diff=fabs(a-b);
		while(diff>=0.0001)
		{
			c=(a+b)/2;
			if(f2(c)>0)
				a=c;
			else if(f2(c)<0)
				b=c;
			else if(f2(c)==0)
			{
				printf("The root of function 2 = %.3f\n",i);
				break;
			}
			diff=fabs(a-b);
		}
		printf("The root of function 2 = %.3f\n",c);
	}
}
int main(void)
{
	printf("find the root of the functions are:\n1. 10x + sinx + 2x =0 (upto 4 decimal places)\n2. x^x + 2x - 6 = 0 (upto 3 decimal places)\n");
	bisection();
}*/
main(){
float a=2.67;
printf("%10.2f",a);}
