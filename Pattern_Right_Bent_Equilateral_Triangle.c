// Print Right bent Equilateral Triangle with stars.
#include<stdio.h>
//#include<stdlib.h>
int main()
{
	int n;
	printf("Enter the number of Rows: ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{    
	    // i^th row has n-|n-i| elements
		for(int j=1;j<=n-abs(n-i);j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}