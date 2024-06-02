#include <stdio.h>
void m3()
{
    printf("Inside m3\n");
}
void m2()
{
    m3();
    printf("inside m2\n");
}
void m1()
{
    m2();
    printf("inside m1 function\n");
}
int main()
{
    printf("Excecution stated from main...\n");
    m1();
    printf("Excution ended\n");
    return 0;
}