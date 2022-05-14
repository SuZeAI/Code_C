#include <stdio.h>
int main()
{
    int n, c = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < c + 2; j++)
            printf("%d", j);
        printf("\n");
        c += 2;
    }
}