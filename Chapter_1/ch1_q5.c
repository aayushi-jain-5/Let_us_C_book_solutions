#include<stdio.h>
#include<math.h>
int main()
{
	float l,b,r;
	printf("Enter the length of the rectangle : ");
	scanf("%f",&l);
	printf("Enter the breadth of the rectangle : ");
	scanf("%f",&b);
	printf("Enter the radius of the circle : ");
	scanf("%f",&r);
	printf("\nThe perimeter of the rectangle is = %f",2*(l+b));
	printf("\nThe area of the rectangle is = %f",l*b);
	printf("\nThe circumference of the circle is = %f",2*(22/7)*r);
	printf("\nThe area of the circle is = %f",(22/7)*r*r);
	return 0;
}
