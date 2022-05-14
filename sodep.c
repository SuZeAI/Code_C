#include <stdio.h>
int thuannghich(long long int n)
{
    int a[18], b, c = 0;
    while (n > 0)
    {
        b = n % 10;
        a[c] = b;
        c++;
        n /= 10;
    }
    if (a[0] != 2 * a[c - 1] && a[c - 1] != 2 * a[0])
        return 0;
    for (int i = 1; i < c / 2; i++)
    {
        if (a[i] != a[c - 1 - i])
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
        long long int n;
        scanf("%lld", &n);
        if (thuannghich(n))
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}