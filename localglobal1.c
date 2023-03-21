#include<stdio.h>

float PI = 3.14;

float circle(float r)
{
    float val = 0;
    val = 2 * PI * r * r;
    return val;

}

int main()
{
    float radius = 0.00;
    float aoc = 0.00;

    printf("\nfor find area of cirle pls enter radius \n");
    scanf("%f", &radius);

    aoc = circle(radius);
    printf("\nArea of circle is %f ", aoc);

    return 0;
}
