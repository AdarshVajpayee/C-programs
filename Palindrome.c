//PROGRAM TO CHECK THE GIVEN NUMBER IS PALINDROME OR NOT A PALINDROME
#include<stdio.h>

void main(){
    int n,result=0,rem,temp;
    printf("ENTER THE NUMBER : ");
    scanf("%d",&n);
    temp=n;
    while(temp!=0){
        rem=temp%10;
        result=result*10 + rem;
        temp=temp/10;
    }
    if(result == n){
        printf("*****THE GIVEN NUMBER %d IS A PALINDROME NUMBER *****",n);
    }
    else{
        printf("*****THE GIVEN NUMBER %d IS NOT A PALINDROME NUMBER *****",n);
    }
}

                                   //TO CHECK A PALINDROME WITH IN OR WITHOUT IN--BUILT FUNCTION ON STRINGS
// #include <stdio.h>
// #include<string.h>

//this below function used if and only if they specify without inb-uilt
// int Length_str(char string[]){
//     int i,count=0;
//     for(i=0;string[i]!='\0';i++){
//             count++;
//     }
//     return count;//nothing but returning the length of the string 
// }


// void main()
// {
//     char string[20];
//     int i, length, flag = 0;
//     printf("ENTER THE STRING : ");
//     scanf("%s", &string);

//     // length = strlen(string);//with in built function useage
//       length=Length_str(string);//with out using in-built function 


//     for(i=0;i<length;i++)
//     {
//         if (string[i] != string[length - i - 1])//comparison logic b/n first and last or second and last second so on....................
//             {
//                 flag = 1;//if above comment not satisfies then flag will become 1 means not a palindrome
//                 break;
//             }
//     }
//     if (flag)
//     {
//         printf("*****THE GIVEN STRING %s IS NOT A PALINDROME STRING *****", string);//when flag is 1
//     }
//     else
//     {
//         printf("*****THE GIVEN STRING %s IS A PALINDROME STRING *****", string);//flag is 0 by default
//     }
// }