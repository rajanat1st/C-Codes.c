/* Write a program for printing Pattern like a Right angle Triangle (Pattern 1) with stars.
                  *
                  **
Pattern like ==>  ***
                  ****       
*/
#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number of Rows: ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}  