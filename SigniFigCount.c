#include<stdio.h>
#include<math.h>
#include<stdlib.h>
floatsig()
{
	int c=0,i,j,k,o,p=0,f=0;
	char str[50];
	printf("Enter a number ");
	gets(str);
	p=strlen(str);
	for(i=0;i<=p;i++)
	{
		k=str[i];
		if(k==46)
			f=1;
		if(k>=49 && k<=57)
		break;
	}
	for(j=p;j>=0;j--)
	{
		k=str[j];
		if(k==46)
			f=2;
		if(k>=49 && k<=57)
		break;
	}
	for(o=i;o<=j;o++)
	{
		k=str[o];
		if(k==46)
			f=3;	
	}
	if(f==2)
		c=j-i+1;
	else if(f==1)
		c=p-i;
	else if(f==3)
		c=p-i-1;
	else
		c=j-i+1;	
	printf("\nSignificant Digits = %d",c);
}
main()
{
	floatsig();
}
