//Q15. Write a C program to calculate product of digits of a number.
#include<stdio.h>
int main()
{
	int n,p=1,r;
	printf("Enter number: ");
	scanf("%d",&n);
	while(n)
	{
		r=n%10;
		p=p*r;
		n=n/10;
	}
	printf("Product of Digit => %d",p);

}
