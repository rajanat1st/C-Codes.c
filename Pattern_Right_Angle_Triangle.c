// Print Right angle Triangle pattern with stars.
#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number of Rows: ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{    // i^th row has i elements
		for(int j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}  
