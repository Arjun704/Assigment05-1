//Q09. Write a C program to print multiplication table of any number.
#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter number to generate table: ");
	scanf("%d",&n);
	for(i=1;i<11;i++)
	{
		int mul=n*i;
		printf("%d X %d = %d\n",i,n,mul);
	}
	return 0;
}
