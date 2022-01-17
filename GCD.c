//program to find greatest common divisor of the two +ve integers 
#include <stdio.h>

int gcdResult(int , int);
void main()
{
    int num1, num2;
    
    printf("Enter two positive integers: ");
    scanf("%d %d",&num1,&num2);
    printf("The greatest comon divisor of given two numbers is : %d\n", gcdResult(num1, num2));
}    
int gcdResult(int n1, int n2){
    while(n1!=n2)
    {
        if(n1 > n2)
            n1 = n1 - n2;
        else
            n2 = n2 - n1;
    }
    return n1;
}


