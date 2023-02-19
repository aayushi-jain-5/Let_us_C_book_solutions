#include<stdio.h>
int main()
{
	int n,p,i=0,r=1;
	printf("The two numbers: ");
	scanf("%d %d",&n,&p);
	printf("\nWe have taken %d as base and %d as power\n",n,p);
	while(i<p)
	{
		r=r*n;
		i++;
	}
	printf("%d raise to the power %d is %d",n,p,r);
	return 0;
}
