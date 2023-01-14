#include<stdio.h>
int main()
{
	int science,maths,social_science,hindi,english,total_mrk;
	float agg_mark,per_mark;
	printf("Enter the marks of Science : ");
	scanf("%d",&science);
	printf("\nEnter the marks of Maths : ");
	scanf("%d",&maths);
	printf("\nEnter the marks of Social_Science : ");
	scanf("%d",&social_science);
	printf("\nEnter the marks of Hindi : ");
	scanf("%d",&hindi);
	printf("\nEnter the marks of English : ");
	scanf("%d",&english);
	total_mrk=science+maths+social_science+hindi+english;
	agg_mark=total_mrk/5;
	per_mark=total_mrk/5;
	printf("The aggregate marks is = %f\nThe percentage of marks is = %f ",agg_mark,per_mark);
	return 0;
}
