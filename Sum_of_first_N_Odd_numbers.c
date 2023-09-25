// Write a program to find Sum of first n Odd numbers.
#include<stdio.h>
int main()
{
	int n,s=0;
	printf("Enter the number of eliments: ");
	scanf("%d",&n);
	for(int i=1;i<=n;i=i+2)
	{
		s+=i;
	}
	printf("Sum of first %d Odd numbers = %d",n,s);
}
