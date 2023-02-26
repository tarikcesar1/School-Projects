#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
	int a[10][10],i,j,m,n;
	printf("enter the order of matrix ;\n");
	scanf("%d%d",&m,&n);
	if(m==n)
	{
		printf("type in matrix form : \n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		printf("the given matrix is as follows \n");
		print_matrix(a,n);
		printf("the transposed matrix is as follows \n");
		transpose_matrix(a,n);
		print_matrix(a,n);
	}
	else
	{
		printf("for given values;transpose of matrix is not possible:");
	}
	return 0;
}
print_matrix(int a[10][10], int n)
{
	int i,j,m;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
}
transpose_matrix(int[10][10], int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j,<n;j++)
		{
			if(i<j)
			{
				a[i][j]=a[i][j]+a[j][i];
				a[j][i]=a[i][j]-a[j][i];
				a[i][j]=a[i][j]-a[j][i];
			}
		}
	}
}
