// Write a program input sides of a triangle and check whether triangle is valid or not.

#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the three sides of the triangle: ");
	scanf("%d%d%d",&a,&b,&c);
	if(a+b>c && a+c>b && c+b>a)
    printf("Valid triangle");
    else
    printf("Invalid triangle");
}