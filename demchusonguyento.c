#include <stdio.h>
#include <math.h>
int SoNguyenTo(int i)
{
    if (i < 2)
        return 0;
    else
        for (int j = 2; j <= sqrt(i); j++)
            if (i % j == 0)
                return 0;
    return 1;
}
int main()
{
    long long n;
    scanf("%lld", &n);
    int a[10] = {0}, i = 0;
    while (n > 0)
    {
        i = n % 10;
        if (SoNguyenTo(i))
            a[i]++;
        n /= 10;
    }
    for (int i = 0; i < 10; i++)
    {
        if (a[i] != 0)
        {
            printf("%d %d\n", i, a[i]);
        }
    }
    return 0;
}