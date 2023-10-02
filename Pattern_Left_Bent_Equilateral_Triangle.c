// Print Left bent Equilateral Triangle pattern with stars.
#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number of Rows: ");
	scanf("%d",&n);
	// Left bent Equilateral Triangle has n+(n-1) rows
	for(int i=1;i<=n+(n-1);i++)
	{
		// i^th row has |n-i| leading spaces
		for(int j=1;j<=abs(n-i);j++)
		{
			printf("   ");
		}
		// i^th row has n-|n-i| elements and spaces together
		for(int j=1;j<=n-abs(n-i);j++)
		{
			if(j%2!=0)
			printf("*  ");
			else
			printf("   ");
		}
		printf("\n");
	}	
}
