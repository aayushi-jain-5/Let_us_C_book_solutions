#include<stdio.h>
int main()
{
	int b,s,n,f=0,r,num;
	printf("How many numbers you want to enter: ");
	scanf("%d",&n);
	while(n>0)
	{
		printf("Enter the number: ");
		scanf("%d",&num);
		if(f==0)
		{
			b=s=num;
			f=1;
		}
		else
		{
			if(num>b)
			{
				b=num;
			}
			if(num<s)
			{
				s=num;
			}
		}
		n--;
	}
	if(s>0)
	{
		r=b-s;
	}
	if(s<0)
	{
		r=s-b;
	}
	printf("%d %d",b,s);
	printf("The range of set of numbers is: %d",r);
	return 0;
}
