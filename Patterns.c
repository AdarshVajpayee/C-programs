//pattern 1: Half pyramid 
/*OUTPUT:
The numbers of rows u want in this pattern: 5
* 
* * 
* * * 
* * * * 
* * * * * 
    */
#include<stdio.h>

void main(){
    int n;
    printf("The numbers of rows u want in this pattern: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
}

//pattern 2: Half pyramid of numbers

/*OUTPUT:
The numbers of rows u want in this pattern: 5
1
12
123
1234
12345*/
#include<stdio.h>

void main(){
    int n;
    printf("The numbers of rows u want in this pattern: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
}
//Pattern 3: Half Pyramid of Alphabets
/*Enter the uppercase  character you want to print in the last row: E
 OUTPUT:
 A
 B B
 C C C
 D D D D
 E E E E E*/
#include<stdio.h>

void main(){
    char input,alphabet='A';
    printf("Enter the uppercase  character you want to print in the last row: ");
    scanf("%d",&input);
    for(int i=1;i<=(input-'A'+1);i++){
        for(int j=1;j<=i;j++){
            printf(" %c",alphabet);
        }
        alphabet++;
        printf("\n");
    }
}

//Pattern 4: Inverted Half Pyramid of *
/*OUTPUT:
Enter the number of rows : 5
* * * * * 
* * * * 
* * * 
* * 
* 
*/
#include<stdio.h>

void main(){
    int rows;
    printf("Enter the number of rows : ");
    scanf("%d",&rows);
    for(int i=rows;i>=0;i--){
        for(int j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
}


//Pattern 5: Inverted Half Pyramid of Numbers 
/*OUTPUT:
Enter the number of rows : 5
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1

*/
#include<stdio.h>

void main(){
    int rows;
    printf("Enter the number of rows : ");
    scanf("%d",&rows);
    for(int i=rows;i>=0;i--){
        for(int j=1;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
}

//pattern 6:
/*Output: Enter the number of rows: 5
*****
 ****
  ***
   **
    *
*/
#include<stdio.h>
#include<conio.h>
void main(){
    int i,j,k,n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(k=1;k<i;k++){
            printf(" ");
        }
        for(j=i;j<=n;j++){
            printf("*");
        }
        printf("\n");
    }
}
//pattern :7
/*OUTPUT:Enter the number of rows : 10
                   *
                 * *
               * * *
             * * * *
           * * * * *
         * * * * * *
       * * * * * * *
     * * * * * * * *
   * * * * * * * * *
 * * * * * * * * * *
A*/
#include<stdio.h>
#include<conio.h>
void main() {
    int i,j,k,n;//count=0;
    printf("Enter the number of rows : ");
    scanf("%d",&n);
    for(i=n;i>=1;i--){
        for(k=1;k<i;k++){
            printf("  ");
        }
        for(j=i;j<=n;j++){
            printf(" *");
        }
        printf("\n");
        // count++;
    }
    // printf("%d",count);
}

//pattern 8:
/*Output:
Enter the number of rows : 10
                   *
                 * * *
               * * * * *
             * * * * * * *
           * * * * * * * * *
         * * * * * * * * * * *
       * * * * * * * * * * * * *
     * * * * * * * * * * * * * * *
   * * * * * * * * * * * * * * * * *
 * * * * * * * * * * * * * * * * * * *
A*/
#include<stdio.h>
#include<conio.h>
void main() {
    int i,j,k,n;
    printf("Enter the number of rows : ");
    scanf("%d",&n);
    for(i=n;i>=1;i--){
        for(k=1;k<i;k++){
            printf("  ");
        }
        for(j=i;j<=n;j++){
            printf(" *");
        }
        for(j=n-i;j>=1;j--){
            printf(" *");
        }
        printf("\n");
    }
}

//pattern :9
/*OUTPUT:
Enter the number of rows : 5
 * * * * * * * * *
   * * * * * * *
     * * * * *
       * * *
         *
*/
#include<stdio.h>
#include<conio.h>
void main() {
    int i,j,k,n;
    printf("Enter the number of rows : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(k=1;k<i;k++){
            printf("  ");
        }
        for(j=n;j>=i;j--){
            printf(" *");
        }
        for(j=n-i;j>=1;j--){
            printf(" *");
        }
        printf("\n");
    }
}
//pattern 10:
/*OUTPUT :
Enter the number of rows : 10
                   *
                 * * *
               * * * * *
             * * * * * * *
           * * * * * * * * *
         * * * * * * * * * * *
       * * * * * * * * * * * * *
     * * * * * * * * * * * * * * *
   * * * * * * * * * * * * * * * * *
 * * * * * * * * * * * * * * * * * * *
   * * * * * * * * * * * * * * * * *
     * * * * * * * * * * * * * * *
       * * * * * * * * * * * * *
         * * * * * * * * * * *
           * * * * * * * * *
             * * * * * * *
               * * * * *
                 * * *
                   *
*/
#include<stdio.h>
#include<conio.h>
void main() {
    int i,j,k,n;
    printf("Enter the number of rows : ");
    scanf("%d",&n);
    for(i=n;i>=1;i--){
        for(k=1;k<i;k++){
            printf("  ");
        }
        for(j=i;j<=n;j++){
            printf(" *");
        }
        for(j=n-i;j>=1;j--){
            printf(" *");
        }
        printf("\n");
    }
    for(i=1;i<=n-1;i++){
        for(k=1;k<=i;k++){
            printf("  ");
        }
        for(j=n-1;j>=i;j--){
            printf(" *");
        }
        for(j=n-1-i;j>=1;j--){
            printf(" *");
        }
        printf("\n");
    }
}

