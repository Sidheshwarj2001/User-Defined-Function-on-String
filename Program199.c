// Compare two string
#include <stdio.h>
#include <stdbool.h>

bool strcmpX(char *str1, char *str2)
{
    while ((*str1 != '\0') && (*str2 != '\0'))
    {
        if (*str1 != *str2) // letter are different
        {
            
            if ((*str1 >= 'a') && (*str1 <= 'z')) //First  letter is Small
            {
                if (*str1 != (*str2 + 32))
                {
                    break;
                }
            }
            else if ((*str1 >= 'A') && (*str1 <= 'Z')) // first letter is capital
            {
                if (*str1 != ( *str2 - 32))
                {
                    break;
                }
            }
            else // special symbols and digits
            {
                break;
            }
        }

        str1++;
        str2++;
    }

    if ((*str1 == '\0') && (*str2 == '\0'))
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
    char Brr[20];

    bool bRet = false;

    printf("enter the First string : \n");
    scanf("%[^'\n']s", Arr);

    printf("enter the Second string : \n");
    scanf(" %[^'\n']s", Brr);

    bRet = strcmpX(Arr, Brr); // strcmpX(100,200)

    if (bRet == true)
    {
        printf("Both the String is Identical \n");
    }
    else
    {
        printf("Both the String is Different \n");
    }

    return 0;
}