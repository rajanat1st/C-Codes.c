// Write a program to compute the surface area and volume of a cube by taking a side of the cube
#include<stdio.h>
int main()
{
	float s,sa,v;
	printf("Enter the value of a side of cube: ");
	scanf("%f",&s);
	sa=6*s*s;
	v=s*s*s;
	printf("Surface area = %.2f square units",sa);
	printf("\nVolume = %.2f cubic units",v);
}