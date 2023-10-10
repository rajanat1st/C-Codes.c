// C Program to convert Miles to Kilometers.
#include<stdio.h>
int main()
{
	float m,k;
	printf("Enter the number of miles: ");
	scanf("%f",&m);
	k=m*1.609;
	printf("%.2f Miles = %.2f Kilometers",m,k);
}