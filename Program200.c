// Accept the string from user and reverse it 

#include<stdio.h>

void strRevX(char *str)
{
    char *start = NULL;
    char *end = NULL;
    char Temp = '\0';

    start = str;
    end = str;

    while (*end !='\0')
    {
        end++;
    }

    end--;
    while (start<end)
    {
        Temp = *start;
        *start = *end;
        *end = Temp;
        
        start++;
        end--;
    }
}

int main()
{
    char Arr[20];
    
    printf("Enter the string : \n");
    scanf("%[^'\n]s" , Arr);

    strRevX(Arr);

    printf("Rervese string is : %s \n" , Arr);

    return 0;
}