#include <stdio.h>
int stn(long long a)
{
    long long c = 0, b = a;
    while (b > 0)
    {
        c = b % 10 + c * 10;
        b = b / 10;
    }
    if (c == a)
        return 1;
    return 0;
}
int kt(long long a)
{
    long long b;
    while (a > 0)
    {
        b = a % 10;
        a = a / 10;
        if (b == 6)
            return 1;
    }
    return 0;
}
int tong(long long a)
{
    long long b, i = 0;
    while (a > 0)
    {
        b = a % 10;
        a = a / 10;
        i = i + b;
    }
    if (i % 10 == 8)
        return 1;
    return 0;
}
int main()
{
    long long a, b;
    scanf("%lld %lld", &a, &b);
    if (a > b)
    {
        long long c = a;
        a = b;
        b = c;
    }
    for (long long i = a; i <= b; i++)
    {
        if (stn(i) == 1 && kt(i) == 1 && tong(i) == 1)
        {
            printf("%lld ", i);
        }
    }
    return 0;
}