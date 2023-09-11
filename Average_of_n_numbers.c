// Program to find the average of n numbers
#include<stdio.h>
int main()
{
printf("Enter the number of elemements you want to enter: ");
int n,s=0;
float avg;
scanf("%d",&n);
int a[n];
printf("Enter %d numbers: ",n);
for(int i=1;i<=n;i++){
	scanf("%d",&a[i]);
	s+=a[i];
}
avg=s/n;
printf("Average = %.2f",avg);
}
