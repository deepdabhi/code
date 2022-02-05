#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "deep", str1[] = "dabhi";
    strcpy (str, str1);
    printf ("%s\n", str);
    strcmp(str, str1);
    printf ("\n");
    strcat(str, str1);
    printf ("%s\n", str);
    strrev(str);
    printf ("%s", str);
    return 0;
}