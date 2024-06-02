#include <stdio.h>
#include <string.h>
void main()
{
    char str[20] = "College";
    int size = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        size++;
    }
    for (int i = size; i >= 2; i--)
    {
        str[i + 1] = str[i];
    }
    str[2] = 'l';
    printf("%s", str);
}