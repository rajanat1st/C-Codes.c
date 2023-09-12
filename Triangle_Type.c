// Write a program to check whether a triangle is Equilateral, Isosceles or Scalene.

#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the three sides of a triangle: ");
	scanf("%d%d%d",&a,&b,&c);
	if(a+b>c && a+c>b && b+c>a)
       {
	if(a==b && b==c)
	printf("Equilateral Triangle");
	else if(a==b || a==c || b==c)
	printf("Isosceles Triangle");
	else
	printf("Scalene Triangle");
       }
	else
	printf("Triangle does not exist!");
}
