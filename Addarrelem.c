//program to add the arr elements
#include <stdio.h>
void arrsum();
int n;
void main() {
    printf("Enter how many values u want to read : ");
    scanf("%d", &n);
    arrsum();
}

void arrsum() {
    int arr[n], sum =0;
    for (int i=0; i<n; i++) {
        printf("Enter the value of a[%d] : ", i);
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }
    printf("The sum of the array elements is %d\n", sum);
}