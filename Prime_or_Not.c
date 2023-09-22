// Write a program to find out whether a number is Prime or not.
#include<stdio.h>
int main()
{
	int n,f=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i=2;i<n;i++)
	{
     if(n%i==0)
     f+=1;
	} 
	if(f>0)
	printf("\n%d is a not Prime number",n);
	else
	printf("\n%d is a Prime number",n);
}