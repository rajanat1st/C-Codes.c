//Inches to cm
#include<stdio.h>
int main()
{ 
    printf("Enter the value in inches: ");
    scanf("%f",&inches);
    cm=2.54*inches;
	printf("%.2f inches = %.2f cm",inches,cm);
}
