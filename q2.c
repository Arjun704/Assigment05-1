//Q02. Write a C program to print all natural numbers in reverse (from n to 1). - using while loop
#include<stdio.h>
int main()
{   
    int n=10,i;
    while(n)
    { 
     printf("%d ",n);
     n--;
     if(n==0)
        break;
    };        
    return 0;
}
