// C Program to convert Kilometers to Miles.
#include<stdio.h>
int main()
{
	float k,m;
	printf("Enter the number of kilometers: ");
	scanf("%f",&k);
	m=k*0.621;
	printf("%.2f Kilometers = %.2f Miles",k,m);
}