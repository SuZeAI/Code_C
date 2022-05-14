#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < 2 * (i + 1); j += 2)
            printf("%c", j + '@' - 1);
        for (int h = 2 * i - 1; h >= 1; h -= 2)
            printf("%c", h + '@' - 1);
        printf("\n");
    }
}