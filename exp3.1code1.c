#include <stdio.h>

int main()
{
    float a, b, c;

    printf("Enter three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a)
    {
        printf("Triangle is valid.\n");

        if (a == b && b == c)
        {
            printf("Triangle is equilateral.\n");
        }
        else if (a == b || b == c || a == c)
        {
            printf("Triangle is isosceles.\n");
        }

        else
        {
            printf("Triangle is scalene.\n");
        }

        if ((a * a + b * b == c * c) ||
            (a * a + c * c == b * b) ||
            (b * b + c * c == a * a))
        {
            printf("Triangle is right-angled.\n");
        }
    }
    else
    {
        printf("Triangle is NOT valid.\n");
    }
    return 0;
}