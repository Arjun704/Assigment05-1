//Q11. Write a C program to find first and last digit of a number.
#include <stdio.h>
int main() 
{
   	int number ,firstDigit,lastDigit;
	printf("Enter number: ");
	scanf("%d",&number);
	lastDigit = number%10;
	
	while(number>=10)
	{
		number =number/10;
		}
	firstDigit = number;
	printf("firstDigit => %d\n",firstDigit);	
	printf("LastDigit  =>  %d",lastDigit);

    return 0;
}

