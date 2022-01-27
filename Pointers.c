                                                 //INTRODUCTION TO POINTERS
/*POINTERS:varibles which stores the address of another variable.
int a;
int *p;
p=&a;
a=5;
print p//204
print &a//204
print &p//64
print *p//5 deferencing operator
*p=8
print a //8
p->address
*p->value at address
*/
#include<stdio.h>

void main(){
    int a;
    int *p;
    p=&a;
    printf("%d\n",p);//Address
    printf("%d\n",*p);//value at that address
    printf("%d\n",&a);//address of a
    printf("%d\n",*&a);//value of a
}

//                                          DEREFERENCING :To modify and access
#include<stdio.h>

void main(){
    int a;
    int *p;
    a=10;
    p=&a;
    printf("%d\n",a);
    *p=12;//deferencing
    printf("%d\n",a);
}

#include<stdio.h>

void main(){
    int a=10;
    int *p;
    p=&a;
    // int *p;
    // p=&a;           this two commented line is equivalent to [int *p=&a;]
    printf("Address of P is %d\n",p);
    printf("Value at P is %d\n",*p);
    int b=20;
    *p=b;
    printf("Address of P is %d\n",p);
    printf("Value at P is %d\n",*p);
}
/*
Address of P is 6422212
Value at P is 10
Address of P is 6422212
Value at P is 20
*/

//                                                  POINTER ARTHMETIC

#include<stdio.h>

void main(){
    int a=10;
    int *p;
    p=&a;
    //pointer arithematic
    printf("Address of P is %d\n",p);
    printf("Address of a is %d\n",&a);
    printf("Value at address p is %d\n",*p);
    printf("Value of a is %d\n",a);
    printf("Size of integers is %d bytes \n",sizeof(int));
    printf("Address of P+1 is %d\n",p+1);
    printf("Value at address p+1 is %d\n",*(p+1));
}

#include<stdio.h>

void main(){
    int a=1025;
    int *p=&a;
    printf("Size of the integers is %d Bytes\n",sizeof(int));
    printf("Address = %d,Value = %d\n",p,*p);
    printf("Address = %d,Value = %d\n",p+1,*(p+1));
    char *p0;
    p0=(char*)p;//here p0 is character pointer and p is integer pointer so do [TYPECASTING]
    printf("Size of char is %d bytes\n",sizeof(char));
    printf("Address = %d,Value = %d\n",p0,*p0);
    printf("Address = %d,Value = %d",p0+1,*(p0+1));
    //1025= (MSB) 00000000 00000000 00000100 00000001 (LSB)
    // ........................1x2^10 + 1x2^0 = 1025..................
}

//                   Generic Pointer(void pointers)
// #include<stdio.h>
// int main(){
//     int a=1025;
//     int *p=&a;
//     printf("Size of integer is %d Bytes\n",sizeof(int));
//     printf("Address = %d,Value = %d\n",p,*p);
//     //void pointer - generic pointer
//     void *p0;
//     p0=p;
//     printf("Address = %d\n",p0);//here we cannot do derefercing [Value ERROR]
//     printf("Address = %d",p0+1);
// }

 //                                           pointer to pointer
#include<stdio.h>

int main(){
    int x=5;
    int *p=&x;
    *p=6;
    int **q=&p;
    int ***r=&q;
    printf("%d\n",*p);//6
    printf("%d\n",*q);//value in p
    printf("Address = %d\n",p);
    printf("%d\n",**q);//6
    printf("Address = %d\n",q);
    printf("%d\n",***r);//6
    printf("%d\n",**r);//value in q
    printf("Address = %d\n",r);
    ***r=10;//value of x is 10 now
    printf("x=%d\n",x);
    **q=*p+2;//10+2=12
    printf("x=%d\n",x);
}

//Use cases of pointers: 
//Pointers as function arguments-Call by reference
#include<stdio.h>

void Increment(int a){
    a=a+1;//11 but here a is local to this function
}
        OR
int Increment(int a){
    a=a+1;//11 but here a is local to this function
    return a;
}
int main(){
    int a;
    a=10;
    Increment(a);//10 is passed
    printf("a = %d\n",a);//10 is printed becoz of reason of local varible and global variable
    printf("a = %d\n",Increment(a));//11 is printed when we use int increment function
}

//By using pointers Call by reference
//Pointers as function arguments-Call by reference
#include<stdio.h>

void Increment(int *p){
    *p=*p+1;//deferencing to get the value at the address
}

int main(){
    int a=10;
    Increment(&a);//call by reference
    printf("a = %d\n",a);//11
}

//                                           Pointers and array
// int A[5];
// int *p;
// p=A;
// print A;
// print *A;
// Element at index i : Address - &A[i] or (A+i)
//                      Value   - A[i]  or *(A+i)
// A - A gives base address
//pointers and arrays
#include<stdio.h>

void main(){
    int A[]={2,4,5,71,3};
    int i;
    int *p=A;
    // A++;//Invalid
    // p++;//Valid
    for(i=0;i<5;i++) {
        printf("Address = %d\n",&A[i]);
        printf("Address = %d\n",A+i);
        printf("Value = %d\n",A[i]);
        printf("Value = %d\n",A[i]);
    }
}

//                                    Array as function Arguments
#include<stdio.h>

int Sumofelem(int A[],int size)//instead of A[] we can write it as *A becoz it acts like pointer we just copying the address 
{                     //For Array there is no call by value there is always call by reference
        //Therefore passing size as argument is important
        int i,sum=0;
        //int size=sizeof(A)/sizeof(A[0]);//this wont work as it will be having value  size=1 means 4/4
        for(i=0;i<size;i++)
        {
                sum=sum+A[i];
        }
        return sum;
}

int main() {
        int A[]={1,2,3,4,5};
        int size=sizeof(A)/sizeof(A[0]);
        int total =Sumofelem(A,size);
        printf("Sum of elements = %d\n",total);
}

//                                          Double value of an elements in array
#include<stdio.h>

void Double(int *A,int size)
{                     
        int i;
        for(i=0;i<size;i++)
        {
            A[i]=2*A[i];    
        }
}

int main() {
        int A[]={1,2,3,4,5};
        int size=sizeof(A)/sizeof(A[0]);
        Double(A,size);
        int i;
        for(i=0;i<size;i++){
                printf("%d ",A[i]);
        }
}

//                                            Character Array and pointers
//Arrays and pointers are different types that are used in same manner 
//char c1[6]="Hello";
//char *c2;
//c2=c1;correct
//c1=c2;wrong we will get compliation error
//And also we cannot do C1=C1+1 becoz it is not a pointer,where as we can do this with c2 becoz it is pointer
//Arrays are always passed to function by reference
#include<stdio.h>

void print(char *c){
        while(*c!='\0'){
                printf("%c",*c);
                c++;
        }
        printf("\n");
}

int main(){
        char c[20]="Hello";
        print(c);
}

//                                        pointers and multidimensional array
//INTRODUCTION:
//in one dimensional array 
                           //Addresses: 200     204      208      212     216
                           //Value    : 2       4         6        8       10
//int A[5];
// int *p=A;
// print p; //200
//print *p;// 2
//print *(p+2);// 6 means value at 208 //200+2*4=208
//Similarily
//int A[5];

// print A; //200
//print *A;// 2
//print *(A+2);// 6 means value at 208 //200+2*4=208
//*(A+i) is same as A[i];
//(A+i) is same as &A[i];


//TWO DIMENSIONAL ARRAY:
// int B[2][3]    creating two one dimensional array of three integers
// B[0] and B[1] Are both one dimensional array of three elements each
//  
//           Starting address of B[0] :400                                      starting address of B[1]:412
//            One dimensional Array of 3 integers                               One dimensional array of 3 integers  
//Name of the array represents the pointer of the array
//int *p=B;produces an compiliation error 
// becoz as B will return a pointer to 1-D array of 3 integers
//therefore 
//int (*p)[3]=B;correct 
// becoz (*p)[3] will return a pointer to 1-D array of 3 integers
//print B Or &B[0] //400
//print *B Or B[0] Or &B[0][0]//400
//                  Address:400                 Address:412
//                2      3      6            4       5       8
//             B[0][0]                     B[1][0]  
//              B[0]                        B[1]
//print B+1 or &B[1]// 400+size of 1-D array of three integers(in bytes)//412
//print *(B+1) or B[1] or &B[1][0]//412
//print *(B+1)+2  or B[1]+2 or &B[1][2]//420
//print *(*B+1) or *(B[0]+1) 0r *(&B[0][1])//3
//
//for 2-D array
//B[i][j] = *(B[i]+j)
//        = *(*(B+i)+j)

//                   Pointers and multidimensional array{array of array}or (collection of array)
//int B[2][3] 
//                  Address:400                 Address:412
//                2      3      6            4       5       8
//             B[0][0] B[0][1]  B[0][2]     B[1][0] B[1][1] B[1][2]  
//              B[0]                        B[1]
// int (*p)[3]=B;
//print B; or &B[0]//400
//print *B;or B[0] or &B[0][0]//400
//print B[0];//400

//int c[3][2][2]//3 2-D arrays of 2x2
//                              800             816             832
//                              2   5   7   9   3   4   6   1   0   8   11   13
//                              c[0][0] c[0][1]
//                                    c[0]
// int (*p)[2][2]=c; c is a pointer to 2-D array of 2x2
// print c;//800 // c is of type pointer [int *[2][2]]to 2-D array of 2x2
//print *c or c[0] or &c[0][0]//800// deferencing that pointer will get pointer[int *[2]] to one dimensional array of 2 integers 
// c[i][j][k]=*(c[i][j]+[k])=*(*(c[i]+j)+k)=*(*(*(c+i)+j)+k)
// print *(c[0][1]+1)// or c[0][1][1]// 9
//print *(c[1]+1) or c[1][1] or &c[1][1][0]//824

//output:
/*
Number of elements in 3-D Array 12
size of 3-D array is 48
2 5 7 9 3 5 6 1 0 7 11 12
*/
#include<stdio.h>

void func(int A[][2][2],int size)//or we can use (int *A[2][2])
{      
         int i,j,k;
        for(i=0;i<3;i++){
                for(j=0;j<2;j++){
                        for(k=0;k<2;k++){
                          printf("%d ", *(*(*(A+i)+j)+k));
                        // printf("%d ",A[i][j][k]);
                    }
                }
        }
}

void main(){
        int c[3][2][2]={{{2,5},{7,9}},
                         {{3,5},{6,1}},
                         {{0,7},{11,12}}};
        int size=sizeof(c)/sizeof(c[0][0][0]);//12*4/4
        printf("Number of elements in 3-D Array %d\n",size);
        printf("size of 3-D array is %d\n",sizeof(c));//12*4=48
        func(c,size);
}

//                                              Pointers And Dynamic memory
//To find the whole square of (A+B)^2
#include<stdio.h>
int total;
int square(int z){
        return z*z;
}
int Squareofsum(int x,int y){
        int z=square(x+y);
        return z;
}
int main(){
        int a,b;
        printf("Enter the value of a and b : ");
        scanf("%d %d",&a,&b);
        total=Squareofsum(a,b);
        printf("\nOUTPUT = %d\n",total);
}

#include<stdio.h>
#include<stdlib.h>
int main(){
        int a;
        int *p;
        p=(int *)malloc(sizeof(int));//memory is allocated in heap of 4 bytes As sizeof(int)
        *p=10;
        printf("The value of the heap: %d\n",*p);
        printf("The Address at the heap: %d\n",p);
        free(p);//it is responsiblity of the programmer to free the memory allocated so that other programmer can use 
        p=(int *)malloc(sizeof(int));//memory is allocated in heap of 4 bytes As sizeof(int)
        *p=20;
        printf("The value of the heap: %d\n",*p);
        printf("The Address at the heap: %d\n",p);
        free(p);
        *p=24;
        printf("The value of the heap: %d\n",*p);
        printf("The Address at the heap: %d\n",p);
}
/*The value of the heap: 10
The Address at the heap: 9645048       *****using same address *****efficient way is to free memory
The value of the heap: 20
The Address at the heap: 9645048
The value of the heap: 24
The Address at the heap: 9645048  */

//                  library functions in C for Dynamic memory Allocation 
// 1.malloc   -->  void* malloc(n*sizeof(datatype))//returns void pointer n->no. of elements//Typecasting is imp
//                      int *p=(int*)malloc(3*sizeof(int))//it won't initialize memory that it allocates to zero.
// 2.calloc   -->  int *p=(int*)calloc(3,sizeof(int))//it initialize memory that it allocates to zero.
// 3.realloc  -->  int *p=(int*)realloc(ptr,3*sizeof(int))
// 4.free     --> free(p);Deallocation

#include<stdio.h>
#include<stdlib.h>

int main(){
        int n,i;
        printf("Enter the size of the array\n");
        scanf("%d",&n);
        // int A[n];//incorrect the value in the brace  will give compilation error
        int *A=(int*)malloc(n*sizeof(int));
        // int *A=(int*)calloc(n,sizeof(int));
        for(i=0;i<n;i++){
                A[i]=i+1;
        }
        for(i=0;i<n;i++){
                printf("%d ",A[i]);
        }
}
/* OUTPUT : 
Enter the size of the array
15
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 */
//
//                                      Difference of calloc from malloc
#include<stdio.h>
#include<stdlib.h>

int main(){
        int n,i;
        printf("Enter the size of the array\n");
        scanf("%d",&n);
       
        int *A=(int*)calloc(n,sizeof(int));
        for(i=0;i<n;i++){
                printf("%d ",A[i]);
        }
}
/*Output : of above code
Enter the size of the array
10
0 0 0 0 0 0 0 0 0 0 */
//                                       Difference of malloc from calloc
#include<stdio.h>
#include<stdlib.h>

int main(){
        int n,i;
        printf("Enter the size of the array\n");
        scanf("%d",&n);
        int *A=(int*)malloc(n*sizeof(int));
        for(i=0;i<n;i++){
                printf("%d ",A[i]);
        }
}
/*Output : Garbage values
Enter the size of the array
10
12336128 12320960 1397048143 1599229779 1313162313 1229343060 1228755525 1818588270 1176515638 1818848609 
*/

//                                        Realloc
#include<stdio.h>
#include<stdlib.h>

int main(){
        int n,i;
        printf("Enter the size of the array\n");
        scanf("%d",&n);
        int *A=(int*)malloc(n*sizeof(int));
        for(i=0;i<n;i++){
               A[i]=i+1;
        }
        int *B=(int*)realloc(A,2*n*sizeof(int));//Here we doubling the allocated memory
        // int *B=(int*)realloc(A,(n/2)*sizeof(int));
        // int *B=(int*)realloc(A,0);//this statement is equalivalent to free
        // int *B=(int*)realloc(NULL,n*sizeof(int));//this statement is equalivalent to malloc
        
        printf("Previous block address = %d, new Address = %d\n",A,B);
        for(i=0;i<2*n;i++){
                printf("%d  ",B[i]);
        }
}
/*Output:  1
Enter the size of the array
5
Previous block address = 9049192, new Address = 9049192  //here it means we can extend the previous block itself as address are same
1  2  3  4  5  1229343060  -1459617623  59094  9059328  9044160 
*/

//                                                pointers as function returns
#include<stdio.h>
#include<stdlib.h>

int Add(int* a,int* b){//called function
        //a and b are to integers local to the Add 
        printf("Address of a in Add : %d\n",&a);//Address of the pointer variable
        printf("Value in a of Add (address of a in main)= %d\n",a);//Address of a in main
        printf("Value at address stored in a of Add = %d\n",*a);
        int c=(*a)+(*b);
        return c;
}
int main(){//calling function
        int a=2,b=4;//x,y,z are local variables to the main function
        printf("Address of a in main = %d\n",&a);
        //Call by reference
        int c=Add(&a,&b);
        printf("Sum = %d\n",c);
}
/*
Output :
Address of a in main = 6422216
Address of a in Add : 6422192
Value in a of Add (address of a in main)= 6422216
Value at address stored in a of Add = 2
Sum = 6 
*/

#include<stdio.h>
#include<stdlib.h>

void printHelloWorld(){
        printf("Hello World\n");
}

int *Add(int* a,int* b){
        int *c=(int*)malloc(sizeof(int));
        *c= (*a)+(*b);
        return c;
}

int main(){
        int a=2,b=4;
        int* ptr=Add(&a,&b);//once add function returns address of the c i.e is &c  After the executing Add function memory got deallocated 
        printHelloWorld();// depend and stacks After that this statement gets executed
        printf("Sum = %d\n",*ptr);
}
/*
Hello World
Sum = 6 */

//                                              Function Pointers
#include<stdio.h>

int Add(int a,int b){
        return a+b;
}
// int *Func(int,int);//Declaring a function that would return int*
// int (*Func)(int,int);//Declaring a function Pointer
int main(){
        int c;
        int (*p)(int,int);//pointer to function that should take (int ,int ) as argument/parameter and return
        // int *p(int,int);//if we wont use brackets to (*p).then it means that we are decalaring a function that will return pointer to integer 
        p=&Add;//or p=Add//p now points to Add function
        c=(*p)(2,3);//or p(2,3)//deferencing and executing the function
        printf("Sum =%d\n",c);
}
/*output: Sum =5 */

#include<stdio.h>

void printHello(char *name)
{
        printf("Hello %s\n",name);
}
void main(){
        void (*ptr)(char*);
        ptr=printHello;
        ptr("Adarsh");
}
//OUTPUT : Hello Adarsh

//                            Function Pointers ,call-backs and use cases of Function Pointers
#include<stdio.h>

void A(){
        printf("Hello");
}

void B(void (*ptr)())//function pointer as argument
{
        ptr();//Call-back function that ptr points to
}
int main(){
        // void (*p)()=A;
        // B(p);
        B(A);//the above twolines are equivalent to this statement A is a callback function
}

//                                        BubbleSort
#include<stdio.h>

void BubbleSort(int *A,int n){
        int i,j,temp;
        for(i=0;i<n;i++){
                for(j=0;j<n-1;j++){
                        if(A[j]>A[j+1]){//if we write A[j]<A[j+1] we will get decreasing order
                                temp=A[j];
                                A[j]=A[j+1];
                                A[j+1]=temp;
                        }
                }
        }
}

int main(){
        int A[]={3,2,1,5,6,4};//sort in increasing order =>{1,2,3,4,5,6}
        BubbleSort(A,6);
        for(int i=0;i<6;i++){
                printf("%d ",A[i]);
        }
}

//            If we want both increasing and  decreasing order list then we can use function pointers and callbacks

#include<stdio.h>
#include<math.h>//abs() is defined in math.h library
int compare(int a,int b){
        if(a>b) return -1;
        else return 1;
}
int absolute_compare(int a,int b){
        if(abs(a)>abs(b)) return 1;
        return -1;
}
//Callback function should compare two integers,should return 1 if first element has higher rank , 0 if elements are equal andd -1 if second elemnt has higher rank.
void BubbleSort(int *A,int n,int (*compare)(int,int)){
        int i,j,temp;
        for(i=0;i<n;i++){
                for(j=0;j<n-1;j++){
                        if(compare(A[j],A[j+1])>0){//if we write A[j]<A[j+1] we will get decreasing order
                                temp=A[j];
                                A[j]=A[j+1];
                                A[j+1]=temp;
                        }
                }
        }
}

int main(){
        int A[]={-31,22,-1,50,-6,4};//sort in increasing order =>{1,2,3,4,5,6}
        BubbleSort(A,6,compare);
        printf("Decreasing order: ");
        for(int i=0;i<6;i++){
                printf("%d ",A[i]);
        }
        printf("\n");
        printf("Absolute comparsion: ");
        BubbleSort(A,6,absolute_compare);
        for(int i=0;i<6;i++){
                printf("%d ",A[i]);
        }
}
/*OUTPUT:
Decreasing order: 50 22 4 -1 -6 -31 
Absolute comparsion: -1 4 -6 22 -31 50
*/
//                                              
#include<stdio.h>
#include<stdlib.h>//qsort is defined in it
#include<math.h>
int compare(const void* a,const void* b){//void pointer is used becoz of generic design of qsort function(can sort any array)and const keyword is used becoz not to change the Address 
        int A =*((int*)a);//typecasting to int* and getting value
        int B =*((int*)b);
        // return A-B;//output => {-31 -6 -1 4 22 50 }//Increasing order
        // return B-A;//Output => {50 22 4 -1 -6 -31 }//Decreasing order
        return abs(A)-abs(B);//Output =>{-1 4 -6 22 -31 50 }It will take Mod
}
int main(){
        int i,A[]={-31,22,-1,50,-6,4};
        qsort(A,6,sizeof(int),compare);
         for(int i=0;i<6;i++){
                printf("%d ",A[i]);
        }
}

//                                            GAME:
                                    //  "SIMPLE BETTING GAME "
//"Jack Queen King"-Computer shuffles this cards 
//player has to guess the position of the queen
//if he wins ,he takes 3*bet
//if he looses ,he looses the bet amount.
//player has $100 initially

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int cash=100;
void play(int bet){
        char C[3]={'J','Q','K'};
        printf("...........Shuffling............\n");
        srand(time(NULL));//random number generator
        int i;
        for(i=0;i<5;i++){
                int x=rand()%3;//to get only 0,1,& 2.
                int y=rand()%3;//to get only 0,1,& 2.
                int temp=C[x];
                C[x]=C[y];
                C[y]=temp;//swaps characters at position x and y. 
        }
        int playersGuess;
        printf("What's the position of the Queen - 1, 2 or 3? = ");
        scanf("%d",&playersGuess);
        if(C[playersGuess-1]=='Q'){
                cash += 3*bet;
                printf("Wow You win !! Result = %c %c %c  Total Cash = %d",C[0],C[1],C[2],cash);
        }
        else{
                cash -=bet;
                printf("You Loose !! Result = %c %c %c  Total Cash = %d",C[0],C[1],C[2],cash);
        }
}

int main(){
        int bet;
        printf("Welcome To the virtual Casino \n");
        printf("Total cash = $%d\n",cash);
        while(cash>0){
                printf("What's Your Bet ? $");
                scanf("%d",&bet);
                if(bet==0||bet>cash) break;
                play(bet);
                printf("\n****************************************************\n");
        }
}
/*OUTPUT : 
Welcome To the virtual Casino 
Total cash = $100
What's Your Bet ? $50
...........Shuffling............
What's the position of the Queen - 1, 2 or 3? = 2
Wow You win !! Result = J Q K  Total Cash = 250
****************************************************
What's Your Bet ? $100
...........Shuffling............
What's the position of the Queen - 1, 2 or 3? = 1
You Loose !! Result = K Q J  Total Cash = 150
****************************************************
What's Your Bet ? $50 
...........Shuffling............
What's the position of the Queen - 1, 2 or 3? = 1
You Loose !! Result = K Q J  Total Cash = 100
****************************************************
What's Your Bet ? $50
...........Shuffling............
What's the position of the Queen - 1, 2 or 3? = 1
You Loose !! Result = K J Q  Total Cash = 50
****************************************************
What's Your Bet ? $25
...........Shuffling............
What's the position of the Queen - 1, 2 or 3? = 3
You Loose !! Result = K Q J  Total Cash = 25
****************************************************
What's Your Bet ? $20
...........Shuffling............
What's the position of the Queen - 1, 2 or 3? = 3
You Loose !! Result = J Q K  Total Cash = 5
****************************************************
What's Your Bet ? $3
...........Shuffling............
What's the position of the Queen - 1, 2 or 3? = 2
You Loose !! Result = Q K J  Total Cash = 2
****************************************************
What's Your Bet ? $1
...........Shuffling............
What's the position of the Queen - 1, 2 or 3? = 1
Wow You win !! Result = Q K J  Total Cash = 5
****************************************************
What's Your Bet ? $5
...........Shuffling............
What's the position of the Queen - 1, 2 or 3? = 3
You Loose !! Result = Q K J  Total Cash = 0
****************************************************
*/