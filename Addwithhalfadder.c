//program to add two numbers without using + operator using half adder
//USING BITWISE XOR gate AND BITWISE AND GATE WITH LEFT SHIFT

#include<stdio.h>

int main(){
    int sum,carry,a,b;
    printf("Enter the two numbers : ");
    scanf("%d %d",&a,&b);

    while(b!=0){
        sum=a^b;
        carry=(a&b)<<1;
        a=sum;
        b=carry;
    }
    printf("Sum of two numbers is %d",sum);
    return 0;
}
/*EXAMPLE :                               11
            5 -> 0101                  7->0111
            10-> 1010                  2->0010
            15<- 1111                  9<-1001

            SUM = 1111 (XOR)                Iteration :1
           CARRY= 0000  (AND)                 SUM = 0101   (XOR)
    when carry is 0000 its                    CARRY=0010 -> 0100(AND)left shift
    comes out the loop since                Iteration :2
    B will become Zero;                        SUM = 0001   (XOR)
                                                Carry=0100->1000
                                            Iteration :3
                                                 SUM = 1001   (XOR)
                                                Carry=0000
                                                 when carry is 0000 its                    
                                                comes out the loop since                
                                                B will become Zero;  
                                                */