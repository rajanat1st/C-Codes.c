// Write a program to find Sum of first n Even numbers.
#include<stdio.h>
int main()
{
	int n,s=0;
	printf("Enter the number of eliments: ");
	scanf("%d",&n);
	for(int i=2;i<=n;i=i+2)
	{
		s+=i;
	}
	printf("Sum of first %d Even numbers = %d",n,s);
}