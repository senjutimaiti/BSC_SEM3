#include<stdio.h>
#include<math.h>
double function(double x, double y)
{
    return x-y;
}
double kValue(double x, double y, double h)
{
    double k1 = h*function(x,y);
    double k2 = h*function((x+h/2), (y+k1/2));
    double k3 = h*function((x+h/2), (y+k2/2));
    double k4 = h*function((x+h), (y+k3));

    double k = (k1+(2*k2)+(2*k3)+k4)/6;
    return k;
}
double RKMethod(double x, double y, double h, double Xn)
{
	int i;
	printf("\n  x\t\t  y\n\n");
    for(i=1;i<=Xn/h;i++)
    {
        double k = kValue(x,y,h);
        x+=h, y+=k;
        printf("%lf\t%lf\n",x,y);
    }
}
int main(void)
{
    double x, y, h, Xn;
    printf("Enter x0,y0,h,xn:\n");
    scanf("%lf",&x);
    scanf("%lf",&y);
    scanf("%lf",&h);
    scanf("%lf",&Xn);
    RKMethod(x,y,h,Xn);
    return 0;
}
