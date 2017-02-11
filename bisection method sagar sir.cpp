#include<stdio.h>
#include<math.h>
#define error pow(10,-6)
double func(double x)
{
	return (pow(x,2)-4*x-10);
	
}
int main()
{
	int loop=0;
	double a,b,m,fa,fb,fm;
	for(int i = -5;i<=5;i++)
	{
		printf("\n\t%d\t\t%6.21f",i,func(i));
	}
	do
	{
		printf("\n\n Enter value of initial guess : ");
		scanf("%2f %2f",&a,&b);
		fa = func(a);
		fb = func(b);
		
	}while ((fa*fb)>0);
	do
	{
		loop++;
		m = (a+b)/2;
		fm = func(m);
		fa=func(a);
		if((fa*fm)<0){
		b=m;
		}
		else
		{
		a=m;
		}
		printf("\n %lf \t = %lf",m,fm);
		} while ((fabs(a-b))>error);
	printf("\n Root = %1f",m);
	printf("\n No. of Iterations = %d",loop);
	printf("\n Interval width = %lf",fabs(b-a));
	return 0 ;
}
