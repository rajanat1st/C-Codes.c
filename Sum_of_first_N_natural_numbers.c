// Write a program to find the sum of first N natural numbers.
#include<stdio.h>
int main()
{
	int n,s=0;
	printf("Enter the value of N: ");
	scanf("%d",&n);
	s=n*(n+1)*.5;
	printf("Sum of first %d natural numbers = %d",n,s);
}