//program to print fibonacci series upto n
#include<stdio.h>

void main()
{
    int a,b,result,n,i;
    printf("ENTER THE NUMBERS OF TERMS : ");
    scanf("%d",&n);
    a=0;
    b=1;
    for(i=1;i<=n;i++){
        printf("%d\t",a);
        result=a+b;
        a=b;
        b=result;
    }
}
                           //program to print nth fibonacci number and n fibonacci series  
// #include <stdio.h>

// int fib(int x)
// {
//     if (x == 0)
//         return 0;
//     else if (x == 1)
//         return 1;
//     else
//         return (fib(x - 1) + fib(x - 2));
// }
// void main()
// {
//     int ch, n, i;
//     while (1)
//     {

//         printf("\nENTER THE NUMBERS OF TERMS or nth element to find fibonacci series of : ");
//         scanf("%d", &n);
//         printf("\nYOU WANT nth element or whole series upto n : ");
//         printf("\n1-nth element\n2-fibonacci series");
//         printf("\nENTER YOUR CHOICE : ");
//         scanf("%d", &ch);
//         switch (ch)
//         {
//         case 1:
//             printf("\n THE %dth FIBONACCI NUMBER is : ", n);
//             printf("%d\t\n", fib(n - 1));
//             break;
//         case 2:
//             printf("\nFibonacci series is : ");
//             for (i = 0; i < n; i++)
//             {
//                 printf("%d\t", fib(i));
//             }
//             break;
//         }
//     }
// }