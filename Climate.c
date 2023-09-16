/* Mr.Snowman considers the climate HOT if the temperature is above 20, otherwise he considers it COLD. You are given the
temperature C, find whether the climate is HOT or COLD. */

#include<stdio.h>
int main()
{
	int c;
	printf("Enter the temperature in celsius: ");
	scanf("%d",&c);
	if(c>20)
	printf("Climate is HOT now");
	else
	printf("Climate is COLD now");
}