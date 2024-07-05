// Compare two string
#include<stdio.h>
#include<stdbool.h>

bool strcmpX(char *str1 ,char *str2)
{
    while ((*str1 != '\0') && (*str2 != '\0') && (*str1 == *str2))
    {
        str1++;
        str2++;
    }
    
    return (*str1 == '\0') && (*str2 == '\0');
    
}

int main()
{
    char Arr[20];
    char Brr[20];

    bool bRet = false;

    printf("enter the First string : \n");
    scanf("%[^'\n']s", Arr);

    printf("enter the Second string : \n");
    scanf(" %[^'\n']s", Brr);

    bRet = strcmpX(Arr,Brr); // strcmpX(100,200)

    if(bRet == true)
    {
        printf("Both the String is Identical \n");
    }
    else
    {
        printf("Both the String is Different \n");
    }

    return 0;
}