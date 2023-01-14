#include<stdio.h>
int main()
{
	float dis,feet,inch,m,cm;
	printf("Enter the distance between two cities\n");
	scanf("%f",&dis);
	printf("The distance between the two in meters is = %.2f\n",dis*1000);
	printf("The distance between the two in feet is = %.2f\n",dis*3281);
	printf("The distance between the two in inches is = %.2f\n",dis*39370);
	printf("The distance between the two in centimeters is = %.2f\n",dis*100000);
	return 0;
}
