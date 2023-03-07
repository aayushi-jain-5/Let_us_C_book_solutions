#include<stdio.h>
#include<math.h>
int main()
{
	int p,q,i;
	float r,a,n;
	for(i=0;i<10;i++)
	{
		printf("How many times interest compounds per year: ");
		scanf("%d",&q);
		printf("How many years: ");
		scanf("%f",&n);
		printf("What is the rate: ");
		scanf("%f",&r);
		printf("What is the principle amount: ");
		scanf("%d",&p);
		a=p+pow((1+(r/q)),(n*q));
		printf("Amount = Rs.%f\n\n",a);		
	}
	return 0;
}
