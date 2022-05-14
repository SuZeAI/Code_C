#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, a;
        scanf("%d", &n);
        a = n;
        for (int i = 2; i <= n / 2; i++)
        {
            while (a % i == 0)
            {
                printf("%d ", i);
                a /= i;
            }
        }
        printf("\n");
    }
}