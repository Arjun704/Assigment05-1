//Q12. Write a C program to find sum of first and last digit of a number.
#include<stdio.h>
int main()
{
	int number ,firstDigit,lastDigit,sum;
	printf("Enter number: ");
	scanf("%d",&number);
	lastDigit = number%10;
	
	while(number>=10)
	{
		number =number/10;
		}
	firstDigit = number;
	
	sum = lastDigit + firstDigit;
	
	printf("Sum of first and Last Digit => %d",sum);
	

		
	return 0;
}
