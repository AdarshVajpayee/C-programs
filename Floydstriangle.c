//Floyd's triangle
#include<stdio.h>

void main(){
       int i,j,rows,val=1;
       printf("ENTER THE NUMBER OF ROWS : ");//5
       scanf("%d",&rows);

       for(i=1;i<=rows;i++){                    
           for(j=1;j<=i;j++){                   
               printf("%d ", val);               
               val++;
           }
             printf("\n");
       }
}