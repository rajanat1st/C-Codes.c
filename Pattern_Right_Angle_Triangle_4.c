/* Write a program for printing Pattern like a Right angle Triangle (Pattern 4) with stars.
                  ****
                   ***
Pattern like ==>    **
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
		for(int j=n;j>=1;j--)
		{
			if(i-j>=0)
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
}  