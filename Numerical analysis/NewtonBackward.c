#include <stdio.h>
#include <string.h>
forward()
{
	int n,i,j,p,q;
	printf("Enter the number of values: ");
	scanf("%d",&n);
	float y[2*n-1][n+1];
	for(i=0;i<2*n-1;i++)
		for(j=0;j<=n;j++)
			y[i][j]=-9999;
	printf("Enter the values of x with f(x) respectively\n");
	for(i=0;i<(2*n-1);i+=2)
	{
		printf("Enter value %d: ",(i/2+1));
		scanf("%f",&y[i][0]);
		scanf("%f",&y[i][1]);
	}
	for(i=2;i<=n;i++)
	{
		p=y[i][i-1]-y[i-2][i-1];
		q=1;
		for(j=i-1;j<2*n-i;j+=2)
		{
			y[j][i]=y[j+1][i-1]-y[j-1][i-1];
			if(y[j][i]!=p)
			q=0;
		}
		if(q==1)
			break;
	}
	printf("\nThe Table:\n\nx\t\ty");
	if(q==0)
		i--;
	p=i;
	for(j=1;j<i;j++)
		printf("\t\td^%dy",j);
	printf("\n\n");
	for(i=0;i<2*n-1;i++)
	{
		for(j=0;j<=n;j++)
		{
			if(y[i][j]!=-9999)
				printf("%f\t",y[i][j]);
			else
				printf("\t\t");
		}
		printf("\n");
	}
	float h,u,x,f,pro,fact;
	printf("\nEnter the value of x: ");
	scanf("%f",&x);
	h=y[2][0]-y[0][0];
	u=(x-y[0][0])/h;
	f=y[0][1];
	for(j=1;j<p;j++)
	{
		pro=1;fact=1;
		for(i=0;i<j;i++)
		{
			pro=pro*(u-i);
			fact=fact*(i+1);
		}
		f=f+(pro*y[j][j+1]/fact);
	}
	printf("\nThe solution is %f\n",f);
}
main()
{
	forward();
}
