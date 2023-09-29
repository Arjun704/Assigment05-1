//Q01. Write a C program to print all natural numbers from 1 to n. - using while loop
#include<stdio.h>
int main()
{   
    int n=10,i;
    while(n)
    { 
     printf("%d ",i);
     i++;
     if(i>n)
        break;
    };        
    return 0;
}
