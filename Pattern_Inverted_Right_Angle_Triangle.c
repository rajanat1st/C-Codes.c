// Print Inverted Right angle Triangle pattern with stars.
#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number of Rows: ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{   // i^th row has (n-i+1) elements
		for(int j=1;j<=n-i+1;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
} 
