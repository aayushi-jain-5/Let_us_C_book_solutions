#include<stdio.h>
int main()
{
	int i=0;
	printf("Printing all the ASCII values with there equivalent characters\n\n");
	while(i<=255)
	{
		printf("%d = %c\n",i,i);
		i++;
	}
	return 0;
}
