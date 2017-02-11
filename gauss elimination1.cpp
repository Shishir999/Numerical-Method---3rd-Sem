#include<stdio.h>
int main ()
{
	int i,j,k,n;
	float a[15][15], b[10], sum, temp;
	printf("Enter n : ");
	scanf("%d",&n);
	printf("Enter the elements of augmented matrix row-wise \n");
	for(i=0; i<n;i++)
	{
		for(j=0; j<=n ; j++)
		{
			scanf("%f",&a[i][j]);
		}
	}
	 //Main Calculation
	 for(i=0;i<n-1;i++)
	 {
	 	for(j=i+1;j<n;j++)
	 	{
	 		temp= a[i][j]/a[i][i];
	 		for(k=0;k<=n;k++)
	 		{
	 			a[j][k]-=temp* a[i][k];
			 }
		 }
	 }
	 printf("upper triangular matrix is : \n");
	  for(i=0;i<n;i++)
	  {
	  	for(j=0;j<=n;j++)
	  	{
	  		printf("%d\t",a[i][j]);
		  }
		  printf("\n");
	  }
	 
	 
	 //For calucalating values of z ,y ,z via backward subsititution method 
	 b[n]=a[n][n+1]/a[n][n];
	 for(i=n-1;i>=0;i--)
	 {
	 	sum= s0;
	 	for(j=i+1;j<n;j++)
	 	{
	 		sum += a[i][j]*b[j];
	 		b[i]= (a[i][j]-sum)/a[i][i];
		 }
	 }
	 
//	 printf("*** The upper triangular matrix is : ****\n");
//	 for(i=0;i<n;i++)
//	 {
//	 	for(j=0;j<=n;j++);
//	 	{
//	 		printf("%.2f\t",a[i][j]);
//	 		printf("\n");
//		 }
//	 }
	 printf("The solution is \n ");
	 for(i=0;i<n ; i++)
	 
	 {
	 	printf("%d=%f\n",i+1,b[i]);
	 	
	 }
	 return 0;
}
