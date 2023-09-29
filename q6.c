//Q06. Write a C program to find sum of all natural numbers between 1 to n.
int main()
{   
    int n,i,sum=0;
    printf("Enter number: ");
    scanf("%d",&n);
    while(n>0)
    { 
     sum=sum+i;
     i++;
//     if(i>n)
//        break;

    };
	printf("sum => %d",sum);        
    return 0;
}
