// Write program to find the largest among three numbers.
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter three numbers: ");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c)
	printf("The largest number is %d",a);
	else if(b>a && b>c)
	printf("The largest number is %d",b);
	else if(c>a && c>b)
	printf("The largest number is %d",c);
	else
	printf("The largest number is %d",a);
}