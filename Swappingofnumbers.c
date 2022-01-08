// swapping two numbers without using third variable
#include <stdio.h>
void main(){
    int a,b;
    printf("ENTER THE TWO ELEMENTS YOU WANT TO SWAP : ");
    scanf("%d %d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("AFTER SWAPPING ELEMENTS ARE : %d %d\n",a,b);
}