#include <stdio.h>
int main()
{
    int C;
    scanf("%d", &C);
    float F = C * (float)9 / 5 + 32;
    printf("%.2f", F);
}