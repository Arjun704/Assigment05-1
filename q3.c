//Q03. Write a C program to print all alphabets from a to z. - using while loop
#include<stdio.h>
int main()
{   
    char ch='a';
    while(ch)
    { 
     printf("%c ",ch);
     ch++;
     if(ch>'z')
        break;
    };        
    return 0;
}
