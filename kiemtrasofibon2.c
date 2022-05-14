
#include <stdio.h>
int fn(long long int n)
{
    long long int f0 = 0, f1 = 1, fn = 0;
    if (n == f0)
        return 1;
    while (fn < n)
    {
        fn = f0 + f1;
        if (fn == n)
            return 1;
        f0 = f1;
        f1 = fn;
    }
    return 0;
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long int n;
        scanf("%lld", &n);
        if (fn(n) == 1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}