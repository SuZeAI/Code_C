#include <stdio.h>
long long chuyenso(long long x1, int doi)
{
    long long a, b[18], i = 0, sum = 0;
    while (x1)
    {
        a = x1 % 10;
        b[i] = a;
        if (a == doi && doi == 6)
            b[i] = 5;
        if (a == doi && doi == 5)
            b[i] = 6;
        i++;
        x1 /= 10;
    }
    for (int j = i - 1; j >= 0; j--)
        sum = sum * 10 + b[j];
    return sum;
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long x1, x2, min, max;
        scanf("%lld%lld", &x1, &x2);
        min = chuyenso(x1, 6) + chuyenso(x2, 6);
        max = chuyenso(x1, 5) + chuyenso(x2, 5);
        printf("%lld %lld\n", min, max);
    }
}