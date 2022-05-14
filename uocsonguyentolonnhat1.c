#include <stdio.h>
#include <math.h>
int snt(long long int n)
{
    if (n == 1)
        return 0;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return 0;
    return 1;
}
long long int sln(long long int n)
{
    int i = 1;
    long long int max;
    while (i <= sqrt(n))
    {
        if (n % i == 0)
        {
            if (snt(n / i))
                return n / i;
            if (snt(i))
                max = i;
        }
        i++;
    }
    return max;
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long n;
        scanf("%lld", &n);
        printf("%lld\n", sln(n));
    }
}