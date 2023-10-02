// Print Right bent Equilateral Triangle pattern with stars.
#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number of Rows: ");
	scanf("%d",&n);
	// Right bent Equilateral Triangle has n+(n-1) rows
	for(int i=1;i<=n+(n-1);i++)
	{    
        // i^th row has n-|n-i| elements and spaces together
		for(int j=1;j<=n-abs(n-i);j++)
		{
		   // For i, Odd row starts with element and Even row starts with space
		   if(i%2!=0)
		   {
		      if(j%2!=0)
			printf("*  ");
		      else
			printf("   ");
		    }
		    else
		      if(j%2!=0)
		       printf("   ");
		      else
		       printf("*  ");
		}
		printf("\n");
	}
}
