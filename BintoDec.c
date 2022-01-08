                                    //BINARY TO DECIMAL
#include <stdio.h>

void main(){
    int binary,decimal=0,rem,base=1,num; 
    printf("ENTER THE BINARY NUMBER : ");
    scanf("%d",&binary);

    num=binary;
    while(binary!=0){
        rem=binary%10;
        decimal=decimal+base*rem;
        binary=binary/10;
        base =base *2;
    }
    printf("EQUIVALENT DECIMAL NUMBER OF THE GIVEN BINARY NUMBER IS %d : %d",num,decimal);
}
