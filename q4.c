//Q04. Write a C program to print all even numbers between 1 to 100. - using while loop
#include<stdio.h>
int main()
{   
    int i=1;
    while(100)
    { 
     if(i%2==0)
        printf("%d ",i);
        i++;
     if(i>100)
        break;

    };        
    return 0;
}
