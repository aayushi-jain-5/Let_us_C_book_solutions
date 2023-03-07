//Area of a triangle using heron's formula// 
#include<stdio.h>
#include<math.h>
int main()
{
	int s1,s2,s3;
	double a,s;  //a stands for area and s stands for semi-perimeter;
	printf("Enter the first side of the triangle : ");
	scanf("%d",&s1);
	printf("Enter the second side of the triangle : ");
	scanf("%d",&s2);
	printf("Enter the third side of the triangle : ");
	scanf("%d",&s3);	
	//formula for semi-perimeter is { (a*b*c)/2 };
	s=(s1+s2+s3)/2;
	//heron's formula is { sqrt(s*(s-a)*(s-b)*(s-c) }
	a=sqrt(s*(s-s1)*(s-s2)*(s-s3));
	printf("Area of triangle is %lf",a);
	return 0;
}
