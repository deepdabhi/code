#include <stdio.h>

int len(char *);

void main()
{
    char string[20];
    int length;

    printf("\nEnter any string : ");
    gets(string);

    length = len(string);
    printf("The length of the given string %s is : %d", string, length);
}

int len(char *p)
{
    int count = 0;
    while (*p != '\0')
    {
        count++;
        p++;
    }
    return count;
}