// Write a program to check whether the given number is divisible with 9 or not? Print 'True' if divisible and 'False' if not divisible.

#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	if(n%9==0)
    printf("\nTrue");
    else
    printf("\nFalse");
}