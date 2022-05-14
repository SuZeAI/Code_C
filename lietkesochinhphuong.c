#include <stdio.h>
#include <math.h>
int main()
{
    int m, n, dem = 0;
    scanf("%d%d", &m, &n);
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (m <= pow(i, 2) && pow(i, 2) <= n)
        {
            dem++;
        }
    }
    printf("%d\n", dem);
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (m <= pow(i, 2) && pow(i, 2) <= n)
        {
            printf("%d\n", i * i);
        }
    }
}