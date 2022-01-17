//Program of conversion of  UPPER case characters into lower case in given string

#include <stdio.h>

void main()
{
    int i;
    char str[100];
 
	printf("Enter any string : ");
    scanf("%[^\n]s",str);//read string with spaces
        while(str[i]!='\0')
    {
        if(str[i]>='A' && str[i]<='Z'){
            str[i]=str[i]+32;
        }
        i++;
    }
    printf("String in lower case  : %s\n",str);
}