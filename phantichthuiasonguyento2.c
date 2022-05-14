#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int c = n;
    for (int i = 2; i <= n; i++)
    {
        while (n % i == 0)
        {
            if (c == n)
                printf("%d", i);
            else
            {
                printf("x%d", i);
            }
            n /= i;
        }
    }
}