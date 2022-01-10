//pattern pyramid of specified number of rows
//HINT: use matrices to understand it better 
#include <stdio.h>

int main()
{
    int n, i, j;
    printf("HOW MANY NO. OF ROWS U WANT PYRAMID IN : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= 2 * n - 1; j++)//to print the number of stars in j's places (cols)
        {
            if (j >= n - (i - 1) && j <= n + (i - 1))//to print stars from specific place
            {
                printf("*");
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}

