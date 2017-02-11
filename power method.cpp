#include<stdio.h>
#include<conio.h>
#include<math.h>
#define ERR pow(10,-4)

int main()
{	float a[20][20],x[20],y[20],k=0,k1=0;
	int i,j,m,n;
	printf("\nEnter degree of matrix:\t");
	scanf("%d",&n);
	//read the matrix
	printf("\nEnter matrix A:\n");
	for(i=0;i<n;i++)
	{	for(j=0;j<n;j++)
		{	printf("a[%d][%d]=",i,j);
			scanf("%f",&a[i][j]);
		}
	}
	printf("\nEnter initial vector:\n");
	for(i=0;i<n;i++)
	{	printf("x[%d]=",i);
		scanf("%f",&x[i]);
	}
printf("\n");
printf("Eigen Value           Eigen Vector\n");
	do
	{	k1=k;
		//compute y
		for(i=0;i<n;i++)
		{		y[i]=0;
				for(m=0;m<n;m++)
                        y[i]+=a[i][m]*x[m];
        }
		//find max in the y as k
		k=y[0];
		for(i=1;i<n;i++)
		{	if(fabs(y[i])>k)
				k=fabs(y[i]);
		}
	//	compute new x
		for(i=0;i<n;i++)
			x[i]=y[i]/k;

		printf("k=%.3f",k);
		for(i=0;i<n;i++)
			printf("\t\t %.3f",x[i]);
		printf("\n");
		}while(fabs(k1-k)>ERR);

		printf("\neigen value=%.3f",k1);
		printf("\neigen vector=\n");
		for(i=0;i<n;i++)
			printf("%.3f\t",x[i]);
		getch();
	return 0;
	}
 
