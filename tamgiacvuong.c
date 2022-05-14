#include <stdio.h>
#include <stdlib.h>
void sort(long long n, long long a[])
{
    for (long long i = 0; i < n - 1; i++)
    {
        for (long long j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                long long temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
void input(long long n, long long a[])
{
    long long tmp;
    for (long long i = 0; i < n; i++)
        scanf("%lld", &tmp), a[i] = tmp * tmp;
}
void output(long long n, long long a[])
{
    long long map1, map2, pow1, pow2, pow3, pow;
    for (long long i = n - 1; i >= 2; i--)
    {
        map1 = 0;
        map2 = i - 1;
        pow1 = a[map1];
        pow2 = a[map2];
        pow3 = a[i];
        while (map1 != map2)
        {
            if (pow3 == pow1 + pow2)
            {
                printf("YES\n");
                return;
            }
            else if (pow1 + pow2 > pow3)
                pow2 = a[--map2];
            else
                pow1 = a[++map1];
        }
    }
    printf("NO\n");
    return;
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long n;
        scanf("%lld", &n);
        long long a[n];
        input(n, a);
        sort(n, a);
        output(n, a);
    }
    return 0;
}