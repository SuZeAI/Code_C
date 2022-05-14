#include <stdio.h>
long long int fibonacci(int n)
{
    long long int a[100];
    a[0] = 1;
    a[1] = 1;
    if (n == 1)
        return 1;
    else if (n == 2)
        return 1;
    for (int i = 2; i < n; i++)
    {
        a[i] = a[i - 1] + a[i - 2];
    }
    return a[n - 1];
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        printf("%lld\n", fibonacci(n));
    }
}