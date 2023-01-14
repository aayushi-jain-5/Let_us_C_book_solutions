#include<stdio.h>
int main()
{
	float f;
	printf("Enter the temperature of the city ic fahrenheit\n");
	scanf("%f",&f);
	printf("\nThe temperature of the city in centigrade degree is = %f",(f-32)*5/9);
	return 0;
}
