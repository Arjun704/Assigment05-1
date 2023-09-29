//Q14. Write a C program to calculate sum of digits of a number.
#include<stdio.h>
int main()
{
	int n,sum,r;
	printf("Enter number: ");
	scanf("%d",&n);
	while(n)
	{
		r=n%10;
		sum=sum+r;
		n=n/10;
	}
	printf("Sum of Digit => %d",sum);

}
