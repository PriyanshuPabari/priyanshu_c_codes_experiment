// 4.	Write a C program to add two numbers, take number from user.

#include <stdio.h>
int main()
{
    int a, b;
    printf("enter a integer ");
    scanf("%d", &a);
    printf("enter a integer ");
    scanf("%d", &b);
    int c;
    c = a + b;
    printf("the sum is %d", c);
    return 0;
}