#include <stdio.h>
int main()
{
    int str[5];
    int size = 0, i = 0;
    printf("Enter any string: ");
    scanf("%s", &str);
    while (str[i] != '\0')
    {
        size++;
        i++;
    }
    printf("The length of %s is: %d\n", str, size);
    return 0;
}