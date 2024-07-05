#include<stdio.h>
#include<stdbool.h>

bool strCmpX(char *str1 , char *str2)
{

    while((*str1 != '\0' )&& (*str2 != '\0'))
    {

        if(*str1 != *str2)
        {
           break;
        }

        str1++;
        str2++;
    }

    if((*str1 == '\0') &&  (*str2 == '\0'))
    {
        return true;
    }
    else
    {
        return false;
    }
}


int main()
{
    char Arr[20];
    char brr[20];
    bool bRet = false;

    printf("Enter first string : \n");
    scanf("%[^'\n']s" , Arr);

    printf("Enter Second string : \n");
    scanf(" %[^'\n']s" , brr);

    bRet = strCmpX(Arr , brr);

    if (bRet == true)
    {
        printf("Both string is identical  \n");
    }
    else
    {
        printf("Both the string is different \n");
    }
    

    return 0;
}