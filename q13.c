//Q13. Write a C program to swap first and last digits of a number.
#include <stdio.h>
#include <math.h>
int main()
{
    int n,firstDigit, lastDigit,digits, swappedNum;
    printf("Enter number = ");
    scanf("%d", &n);

    lastDigit = n % 10;

    digits    = (int)log10(n);
    firstDigit = (int) (n / pow(10, digits));
    
    swappedNum  = lastDigit;
    swappedNum *= (int) round(pow(10, digits));
    swappedNum += n % ((int)round(pow(10, digits)));
    swappedNum -= lastDigit;
    swappedNum += firstDigit;
    printf("Number after swapping first and last digit: %d", swappedNum);
    return 0;
}
//Logic
//From the above Program to Swap First and Last Digit Of a Number example, you can see that the user entered value = 12345
//
//lastDigit = 12345 % 10 => 5
//
//digits = log10(12345) => 4
//
//firstDigit = 12345 / pow (10, 4) => 12345 / 10000 => 1
//
//swappedNum = LastDigit = 5;
//
//swappedNum = swappedNum * (round(pow(10, digits)));
//swappedNum = 5 * round(pow(10, 4)) => 5 * 10000 => 50000;
//
//swappedNum = swappedNum + Number % (round(pow(10, digits)))
//swappedNum = 50000 + (12345 % 10000) => 50000 + 2345 => 52345
//
//swappedNum = swappedNum – LastDigit
//swappedNum = 52345 – 5 => 52340
//
//swappedNum = swappedNum + FirstDigit
//swappedNum = 52340 + 1 => 52341
