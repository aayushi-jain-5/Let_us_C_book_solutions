#include<stdio.h>
int main()
{
	int n,i=1,f=1;
	printf("Enter a number : ");
	scanf("%d",&n);
	while(i<=n)
	{
		f=f*i;
		i++;	
	}
	printf("Factorial of %d is %d",n,f);
	return 0;
}
