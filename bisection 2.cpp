#include<stdio.h>
#include<math.h>
int a0, a1, a2, a3 ;
float f(float x)
{
	return (a3 *x*x*x+a2*x*x+a1*x+a0);
}
int main ()
{
	float x0,x1,x2,f0,f1,f2,e,er;
	int i = 1;
	printf("Enter the coefficients  a3 , a2, a1, a0 : ");
	scanf("%d%d%d%d",&a3,&a2,&a1,&a0);
	printf("Enter the initial brackets and error : ");
	scanf("%f%f%f",&x1,&x2,&e);
	f1=f(x1) ;
	f2 = f(x2);
	while (1)
	{
		printf("Iteration : %d",i++);
		printf("\n");
		printf("x1 = %f \t x2 = %f \n ",x1,x2);
		printf("f1 = %f \t f2 = %f \n ",f1,f2);
		if((f1*f2)>0)
		{
			printf("Root doesn't exixts ");
			break;
		}
		x0 = (x1 + x2 )/2;
		f0= f(x0);
		printf("x0 = %d\t f0= %f \n",x0,f0);
		if(f(0)==0)
		{
			printf("Root = %f \n",x0);
			break;
		}
		else if ((f1*f0)<0)
		x2=x0;
		else
		  x1=x0;
		  er = (x2-x1);
		  printf("Error = %f\n",er);
		  printf("\n");
		  if(fabs(er)<e)
		  {
		  	printf("Error is %f",fabs(er));
		  	printf("Root = %f \n",x0);
		  	break;
		  }
	}
}

