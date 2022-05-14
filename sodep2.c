#include <stdio.h>
#include <math.h>
int thuannghich(long int n)
{
    long int a[10], b, c = 0, sum = 0;
    while (n > 0)
    {
        b = n % 10;
        sum += b;
        a[c] = b;
        c++;
        n /= 10;
    }
    if (sum % 10 != 0)
        return 1;
    for (int i = 0; i < c / 2; i++)
    {
        if (a[i] != a[c - 1 - i])
            return 1;
    }
    return 0;
}
int main()
{
    int k;
    scanf("%d", &k);
    while (k--)
    {
        long int n, a, b, num = 0;
        scanf("%ld", &n);
        a = pow(10, n - 1);
        b = pow(10, n);
        for (long int i = a; i < b; i++)
            if (thuannghich(i) == 0)
                num++;
        printf("%ld\n", num);
    }
}