// Q07. Write a C program to find sum of all even numbers between 1 to n.
#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("Enter number: ");
	scanf("%d",&n);
	while(n)
	{
		if(i%2==0)
		   sum=sum+i;
		i++;
		if(i>n)
		  break;
		
	}
	printf("sum of even number: %d",sum);
	return 0;
}
