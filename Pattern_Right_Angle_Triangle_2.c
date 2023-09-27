/* Write a program for printing Pattern like a Right angle Triangle (Pattern 2) with stars.
                  ****
                  ***
Pattern like ==>  **
                  *       
*/
#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number of Rows: ");
	scanf("%d",&n);
	for(int i=n;i>=1;i--)
	{
		for(int j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}  