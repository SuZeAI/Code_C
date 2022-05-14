#include <stdio.h>
int dem(long long int n)
{
    int a, numc = 0, numl = 0;
    while (n > 0)
    {
        a = n % 10;
        if (a % 2 == 0)
            numc++;
        else
            numl++;
        n /= 10;
    }
    if (numc > numl)
        return 1;
    else
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
        if (n % 2 == 0 && dem(n) == 1)
            printf("YES\n");
        else
            printf("NO\n");
    }
}