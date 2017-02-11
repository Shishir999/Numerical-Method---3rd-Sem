#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int n,i,j,k,row;
    float a[10][10],b[10][10],x[10];
    float large,flag,temp,sum;
    printf("enter the no of eqns: ");
    scanf("%d",&n);
    printf("now enter the elements:\n One row at each line:\n");
    for(i=0;i<n;i++)
    for(j=0;j<n+1;j++)
    {
        printf("a[%d][%d] = ", i+1,j+1);
        scanf("%f",&a[i][j]);
        b[i][j]=a[i][j];
    }
    for(i=0;i<n;i++)
      {
        row=i;
        large=fabs(a[i][i]);
        for(j=i+1;j<n;j++)
        {
          if(fabs(a[j][i])>large)
          {
               large=fabs(a[j][i]);
               row=j;
           }
        }
        if(row!=i)
        {
            for(k=i;k<n+1;k++)
            {
               flag=a[row][k];
               a[row][k]=a[i][k];
               a[i][k]=flag;
            }
        }
        for(j=0;j<n;j++)
        if(i!=j)
        {
          temp=a[j][i]/a[i][i];
          for(k=0;k<n+1;k++)
          {
             a[j][k]=a[j][k]-temp*a[i][k];
             
           }
         }
         }
     
      printf("the coefficient after G J method is\n");
      for(i=0;i<n;i++)
       {
         for(j=0;j<n+1;j++)
           printf("\t%.4f",a[i][j]);
         printf("\n");
       }
      for(i=0;i<n;i++)
      { x[i]=a[i][n]/a[i][i];
      }
      
      printf("the solution of set of equations are :\n");
      for(i=0;i<n;i++)
        printf("\t%f",x[i]);
     getch();
     return 0;
}

