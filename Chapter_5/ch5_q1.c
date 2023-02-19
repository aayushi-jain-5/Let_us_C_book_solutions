#include<stdio.h>
int main()
{
	int otpay,h,i=0;
	while(i++ < 10)//(i<=10)
	{
		printf("Employee No. %d\n\n",i);
		printf("Enter the number of hours worked : ");
		scanf("%d",&h);
		if(h>40)
		{
			otpay=(h-40)*12;
			printf("\nThe number of hours worked %d\nOvertime pay is %d\n\n",h,otpay);
		}
		else
		{
			printf("\nThe number of hours worked %d is less than or equal to43 40 hours\nHence, no Overtime pay\n\n",h);
		}
		//i++;
	}
	return 0;
}
