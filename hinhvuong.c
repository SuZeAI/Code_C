#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = n; j >= n - i; j--)
            printf("%d", j);
        for (int j = 0; j < 2 * n - 2 * (i + 1) - 1; j++)
            printf("%d", n - i);
        for (int k = n - i; k <= n; k++)
            printf("%d", k);
        printf("\n");
    }
    for (int m = n; m > 0; m--)
        printf("%d", m);
    for (int c = 2; c <= n; c++)
        printf("%d", c);
    printf("\n");
    for (int i = n - 2; i >= 0; i--)
    {
        for (int j = n; j >= n - i; j--)
            printf("%d", j);
        for (int j = 0; j < 2 * n - 2 * (i + 1) - 1; j++)
            printf("%d", n - i);
        for (int k = n - i; k <= n; k++)
            printf("%d", k);
        printf("\n");
    }
}