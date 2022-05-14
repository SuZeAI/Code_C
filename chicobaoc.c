#include <stdio.h>
#include <math.h>
int prime(long long n)
{
    if (n == 1 || n == 0)
        return 0;
    for (long long i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
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
        long long L, R, cout = 0;
        scanf("%lld%lld", &L, &R);
        long long a = sqrt(L);
        long long b = sqrt(R);
        if (pow(b, 2) != R)
            b++;
        for (long long i = a + 1; i < b; i++)
            if (prime(i) == 1)
                cout++;
        printf("%lld\n", cout);
    }
    return 0;
}