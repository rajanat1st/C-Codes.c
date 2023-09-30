// Write a program to reverse the given number.
#include<stdio.h>
int main()
{
	int n,r,rev=0;
	printf("Enter a number to be reversed: ");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	printf("\nThe reversed number is %d",rev);
}