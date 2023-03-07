#include<stdio.h>
#include<math.h>
int main()
{
	int n,an;
	printf("Enter the number");
	scanf("%d",&n);
	if(n<0)
	{
		an=n*-1;
	}
	else
	{
		an=n;
	}
//	an=abs(n);
	printf("The absolute value of %d is %d",n,an);
	return 0;
}
