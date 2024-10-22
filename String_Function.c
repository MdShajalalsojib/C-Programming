#include <stdio.h>
 void dis_Str(char str[])
{
    printf("String Output: ");
    puts(str);
}

int main()
{
    char str[50];
    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);
     dis_Str(str);     // Passing string to a function.
    return 0;
}
