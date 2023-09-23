// Write a program to check whether a number is Palindrome or Not.
#include<stdio.h>
int main()
{
	int n,n1,r,rev=0;
	printf("Enter a number: ");
	scanf("%d",&n);
	n1=n;
	while(n>0)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	if(n1==rev)
	printf("\n%d is a Palindrome",n1);
	else
	printf("\n%d is not a Palindrome",n1);
}