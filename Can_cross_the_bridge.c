/*You are given that a mango weighs X kilograms and a truck weighs Y kilograms. You want to crossa bridge that can withstand a
wdeight of Z kilograms. Find the maximum number of mangoes you can load in the truck so that you can cross the bridge safely
( Take X , Y and Z from the console).
It is guaranteed that X<=Y<=Z'''*/
#include<stdio.h>
int main()
{
   int y,z,m;
float x;
printf("Enter the weight of a mango (in Kg): ");
scanf("%f",&x);
printf("Enter the weight of the truck (in Kg): ");
scanf("%d",&y);
printf("Enter the weight the bridge can withstand (in Kg): ");
scanf("%d",&z);
m=(z-y)/x;
printf("Maximum number of mangoes you can load in the truck = %d",m);
}
