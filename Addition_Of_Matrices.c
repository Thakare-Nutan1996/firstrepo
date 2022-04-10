//Addition of Matrices
#include<stdio.h>
main()
{
	int A[3][3],B[3][3],C[3][3],i,j;
	
	printf("Enter the Matrix A:-\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
	
	printf("Matrix A:-\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",A[i][j]);
		}
		printf("\n");
	}
	
	printf("Enter the Matrix B:-\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&B[i][j]);	
		}	
	}
	
	printf("Matrix B:-\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",B[i][j]);
		}
		printf("\n");
	}

	printf("\nAddition of Matrices:-\n");
	printf("\nMatrix C:-\n");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			C[i][j]=A[i][j]+B[i][j];
			printf("%d\t",C[i][j]);
		}
		printf("\n");
	}
}
