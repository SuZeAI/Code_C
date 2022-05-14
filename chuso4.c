#include <stdio.h>
#include <math.h>
int thuannghich(int n)
{
    int a[10], b, c = 0, sum = 0;
    while (n > 0)
    {
        b = n % 10;
        if (b == 4)
            return 0;
        sum += b;
        a[c] = b;
        c++;
        n /= 10;
    }
    if (sum % 10 != 0)
        return 0;
    for (int i = 0; i < c / 2; i++)
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
        int n, a, b;
        scanf("%d", &n);
        a = pow(10, n - 1);
        b = pow(10, n);
        for (int i = a; i < b; i++)
            if (thuannghich(i) == 1)
                printf("%d ", i);
        printf("\n");
    }
    return 0;
}