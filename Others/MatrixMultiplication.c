#include <stdio.h>
int main()
{
	int a[3][3], b[3][3], c[3][3];
	int i,j,k,m,n,p,q;
	printf("Enter the row and column of first matrix:\n");
	scanf("%d%d",&m,&n);
	printf("Enter the row and column of second matrix:\n");
	scanf("%d%d",&p,&q);
	if(n!=p)
	{
		printf("Matrix multiplication is not possible.");
	}
	else
	{
		printf("Enter elements of first matrix:\n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		printf("Enter elements of second matrix:\n");
		for(i=0;i<p;i++)
		{
			for(j=0;j<q;j++)
			{
				scanf("%d",&b[i][j]);
			}
		}
		printf("Order of 1st matrix = %dx%d\n",m,n);
		printf("Elements of 1st matrix:\n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				printf("%d ",a[i][j]);
			}
			printf("\n");
		}
		printf("Order of 2nd matrix = %dx%d\n",p,q);
		printf("Elements of 2nd matrix:\n");
		for(i=0;i<p;i++)
		{
			for(j=0;j<q;j++)
			{
				printf("%d ",b[i][j]);
			}
			printf("\n");
		}
		printf("Order of 3rd matrix = %dx%d\n",m,q);
		printf("Elements of 3rd matrix:\n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<q;j++)
			{
				c[i][j]=0;
				for(k=0;k<p;k++)
				{
					c[i][j]=a[i][k]*b[k][j]+c[i][j];
				}
			}
		}
		for(i=0;i<m;i++)
		{
			for(j=0;j<q;j++)
			{
				printf("%d ",c[i][j]);
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}
