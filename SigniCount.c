#include<stdio.h>
#include<math.h>
#include<stdlib.h>
floatsig()
{
	int c=0,i,j,k,o,p=0,f=0;
	char str[50];
	printf("Enter a number ");
	/*float f; 
	scanf("%f",&f);
	sprintf(str,"%f",f);
	printf("\n%f\n",f);
	printf("\n%s\n",str);*/
	while(str[p]!='\0')
	{
		p++;
	}
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
			f=1;
		if(k>=49 && k<=57)
		break;
	}
	if(f==1)
		c=j-i+1;
	else
		c=j-i;
	printf("\nSignificant Digits = %d",c);
}
main()
{
	floatsig();
}
