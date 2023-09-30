// Print Inverted mirrored Right angle Triangle pattern with stars.
int main()
{
	int n;
	printf("Enter the number of Rows: ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{    
		// i^th row has (i-1) leading spaces
		for(int j=1;j<=i-1;j++)
		{
			printf("  ");
		}
		// i^th row has (n-i+1) elements
		for(int j=1;j<=n-i+1;j++)
		{
			printf("* ");
		} 
		printf("\n");
	}
}
