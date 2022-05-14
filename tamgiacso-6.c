#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < n - i - 1; k++)
            printf("~");
        for (int j = 2; j <= 2 * (i + 1); j += 2)
            printf("%d", j);
        for (int h = 2 * i; h >= 2; h -= 2)
            printf("%d", h);
        printf("\n");
    }
}