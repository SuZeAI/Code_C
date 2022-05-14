#include <stdio.h>
long long int UCLN(long long int a, long long int b)
{
    if (b == 0)
        return a;
    return UCLN(b, a % b);
}
long long int BCNN(long long int a, long long int b)
{
    return a * b / UCLN(a, b);
}
long long int BCNNN(long long int n, long long int m)
{
    long long int x = n;
    for (long long int i = n + 1; i <= m; i++)
    {
        x = BCNN(x, i);
    }
    return x;
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long int n, m;
        scanf("%lld%lld", &n, &m);
        printf("%lld\n", BCNNN(n, m));
    }
}