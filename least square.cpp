#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
 
    int n,i;
	float x[20],y[20],sumx=0,sumy=0,sumxy=0,sumx2=0;
    float a,b;
    printf("\n   C program for Linear Curve Fitting \n ");
    printf("\n Enter the value of number of terms n:");
    scanf("%d",&n);
    printf("\n Enter the values of x:\n");
    for(i=0;i<=n-1;i++)
    {
        scanf(" %f",&x[i]);
 
    }
    printf("\n Enter the values of y:");
    for(i=0;i<=n-1;i++)
    {
        scanf("%f",&y[i]);
    }
    for(i=0;i<=n-1;i++)
    {
        sumx=sumx +x[i];
        sumx2=sumx2 +(x[i]*x[i]);
        sumy=sumy +y[i];
        sumxy=sumxy +x[i]*y[i];
 
    }
    printf("sumx = %f ",sumx);
    printf("\nsumx2 = %f ",sumx2);
    printf("\nsumy = %f",sumy);
    printf("\nsumxy  = %f ",sumxy);
    a=(sumx2*sumy -sumx*sumxy)/(n*sumx2-sumx*sumx);
    b=(n*sumxy-sumx*sumy)/(n*sumx2-sumx*sumx);
    printf("\n\nThe line is Y=%3.3f +%3.3f X",a,b);
    return(0);
}
