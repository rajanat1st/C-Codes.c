// Write a program to take inputs (integers) infinitely until user enters -1 as input.
#include<stdio.h>
int main()
{    
    int n;
	while(n!=-1)
	{
	printf("Enter an integer: ");
	scanf("%d",&n);
	} 
	printf("\nProgram is ended!");
}