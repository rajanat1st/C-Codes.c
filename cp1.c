//Inches to cm
#include<stdio.h>
int main()
{
    int inches;
    float cm;
    printf("Enter the value in inches: ");
    scanf("%d",&inches);
    cm=2.54*inches;
	printf("%d inches = %.2f cm",inches,cm);
}