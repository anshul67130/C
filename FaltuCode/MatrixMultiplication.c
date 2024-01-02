#include <stdio.h>
int main()
{

int a[10][10],b[10][10],result[10][10]={0},m1,n1,m2,n2,i,j,sum=0;
printf("Enter size of first matrix (eg. 3 3 ): ");
scanf("%d %d",&m1,&n1);
printf("Enter size of second matrix (eg. 3 3 ): ");
scanf("%d %d",&m2,&n2);

if (n1!=m2)
{
printf("Matrices are not compatible for multiplication.\n");
}
else
{

printf("Enter first matrix: \n");
for  (i=1 ;i<=m1; i++)
{
	for (j=1; j<=n1; j++)
	{
		scanf("%d",&a[i][j]);
	}
}

printf("Enter second matrix: \n");
for  (i=1 ;i<=m2; i++)
{
        for (j=1; j<=n2; j++)
        {
                scanf("%d",&b[i][j]);
        }
}

for (i=1 ; i<=m1; i++)
{
	for (j=1;j<=n2;j++)
	{
		for (int k = 1; k<=n1; k++)
		{
			sum += a[i][k]*b[k][j];
		}
		result[i][j]=sum;
		sum = 0;
	}
}
printf("The result is: \n");
for (i=1;i<=m1;i++)
{
	for (j=1;j<=n2; j++)
	{
		printf("%d  " , result[i][j]);
	}
	printf("\n");
}

}
return 0;
}
