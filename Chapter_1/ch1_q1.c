// Gross salary
#include<stdio.h>
int main()
{
	int salary,Dearness,House_rent,c;
	printf("Enter your basic salary\n");
	scanf("%d",&salary);
	Dearness =(40*salary)/100;
	House_rent=(20*salary)/100;
	printf("Dearness = %d\nHouse_rent = %d",Dearness,House_rent);
	c=Dearness+House_rent+salary;
	printf("\nRamesh's gross salary is = %d",c);
	return 0;
}
