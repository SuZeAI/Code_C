#include <stdio.h>
#include <math.h>
int nt(int g)
{
    for (int j = 2; j <= sqrt(g); j++)
    {
        if (g % j == 0)
            return 0;
    }
    return 1;
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int a[n], m = 2;
        a[0] = 2;
        a[1] = 3;
        for (int g = 5; g < n; g++)
            if (nt(g) == 1)
            {
                a[m] = g;
                m++;
            }
        for (int j = 0; j < m; j++)
        {
            if (nt(n - a[j]) == 1 && a[j] <= n / 2)
                printf("%d %d ", a[j], n - a[j]);
        }
        printf("\n");
    }
}