// Write a program to find whether a number is Even or Odd.
#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	if(n%2==0)
	printf("\n%d is an Even number",n);
	else
	printf("\n%d is an Odd number",n);
}