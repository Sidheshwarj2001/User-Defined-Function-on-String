#include <stdio.h>

void StruprX(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32; // Convert into capital
        }
        str++;
    }
}
int main()
{
    char Arr[20];

    printf("Enter string : \n");
    scanf("%[^'\n']s", Arr);

    StruprX(Arr);

    printf("String After Editing is : %s\n",Arr);

    return 0;
}