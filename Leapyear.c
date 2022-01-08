                        //Program on the LEAP YEAR
// to check the given year is leap year or not?
// -->if a year is divisible by 400.then it is a leap year ex :2000
// -->if a year is not divisible by 400.but it is divisible by 100 then it is not a leap year ex : 1900
// -->if a year is not divisible by 400.and also it is not divisible by 100 but it is divisible by 4 then it is leap year ex:2012
#include <stdio.h>

void main(){
    int year;
    printf("ENTER THE YEAR : ");
    scanf("%d",&year);

    if(year % 400==0){
        printf("IT IS A LEAP YEAR\n ");
    }
    else if(year%100==0){
        printf("ITS IS NOT A LEAP YEAR");
    }
    else if(year%4==0){
        printf("IT IS A LEAP YEAR\n ");
    }
    else{
        printf("ITS IS NOT A LEAP YEAR");
    }
}