//pattern 11:
/*
The numbers of rows u want in this pattern: 10
 1
 2       2
 3       3       3
 4       4       4       4
 5       5       5       5       5
 6       6       6       6       6       6
 7       7       7       7       7       7       7
 8       8       8       8       8       8       8       8
 9       9       9       9       9       9       9       9       9
 10      10      10      10      10      10      10      10      10      10
*/
#include<stdio.h>

void main(){
    int n;
    printf("The numbers of rows u want in this pattern: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf(" %d\t",i);
        }
        printf("\n");
    }
}

//pattern 12:
/*
Enter the number : 10
                   A
                 B B B
               C C C C C
             D D D D D D D
           E E E E E E E E E
         F F F F F F F F F F F
       G G G G G G G G G G G G G
     H H H H H H H H H H H H H H H
   I I I I I I I I I I I I I I I I I
 J J J J J J J J J J J J J J J J J J J
*/
#include<stdio.h>

void main(){
    int n,i,j,k;
    printf("Enter the number : ");
    scanf("%d",&n);
    //ASCII code of A is 65
    for(i=n;i>=1;i--){//runs till the rows or given input
        for(k=1;k<i;k++){//for prints spaces in rows till i
            printf("  ");
        }
        for(j=i;j<=n;j++){//prints the right angled triangle with alphabets [64+n-i+1]=[64+5-5+1=65(A)] and so on.
            printf(" %c",64+n-i+1);
        }
        //above two for loops is to print the right angled triangle with spaces in the beginning  
        for(j=n-i;j>=1;j--){
            printf(" %c",64+n-i+1);//here [64+n-i+1]=[64+5-5+1=65(A)] but it will not print(A)becoz of the condition and printing starts from B
        }
        printf("\n");
    }
}

//Pattern 13:
/*OUTPUT:
Enter the number of rows : 5
 A B C D E E D C B A
 A B C D     D C B A
 A B C         C B A
 A B             B A
 A                 A
*/
#include<stdio.h>
#include<conio.h>
void main() {
    int i,j,k,n;
    printf("Enter the number of rows : ");
    scanf("%d",&n);
    for(i=n-1;i>=0;i--){
        for(j=0;j<=i;j++){
            printf(" %c",65+j);
        }
        for(k=1;k<(n-i);k++){
            printf("    ");
        }
        for(j=i;j>=0;j--){
            printf(" %c",65+j);
        }
        printf("\n");
    }
}

//Pattern 14:
/*
OUTPUT:
1
1 1
1 2 1
1 2 3 1
1 2 3 4 1
*/
#include<stdio.h>
#include<conio.h>

void main(){
    int i,j,n;
    printf("Enter the number  : ");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        if(i<n){
        for(j=1;j<=i;j++){
            printf(" %d",j);
           }
        printf(" 1\n");
        }
    }
}