#include <stdio.h>
int main()
{
    float a, b;
    scanf("%f%f", &a, &b);
    if (a != 0)
    {
        printf("%.2f", -b / a);
    }
    else
    {
        if (b == 0)
        {
            printf("Vo so nghiem");
        }
        else
        {
            printf("Vo nghiem");
        }
    }
}