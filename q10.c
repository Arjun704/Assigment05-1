//Q10. Write a C program to count number of digits in a number.
#include<stdio.h>
void main()
{
	long int n,i,count=0;
	printf("Enter number minmum 2 digit: ");
	scanf("%ld",&n);
	for(i=0;i<n;i++)
	{    
         count=count+i;
         n=n/10;
	}
	printf("cnuber of digit => %ld",count);	
}
