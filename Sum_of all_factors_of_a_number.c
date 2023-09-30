// Write a program to print the Sum of all factors of a number.
#include<stdio.h>
int main()
{
	int n,s=0;
	printf("Enter a number: ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
		s+=i;
	}
	printf("Sum of all factors of %d = %d",n,s);
}   