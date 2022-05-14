#include <stdio.h>
#include <math.h>
int main()
{
    int n, c = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            for (int j = 1; j <= 2 * (i + 1); j += 2)
                printf("%d", j);
        else
            for (int h = 2; h <= 2 * (i + 1); h += 2)
                printf("%d", h);
        printf("\n");
    }
}