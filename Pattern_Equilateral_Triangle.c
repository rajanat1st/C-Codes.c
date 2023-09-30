// Print Equilateral Triangle pattern with stars.
#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number of Rows: ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{   // i^th row has (n-i) leading spaces
		for(int j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		// i^th row has i elements
		for(int j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}
