#include <stdio.h>
#include <math.h>
long long int cs(long long int n)
{
    long long int a, t = 0;
    long long int num = 0;
    while (n > 0)
    {
        a = n % 10;
        if (a == 1)
            num += pow(10, t);
        else if (a == 9 || a == 8 || a == 0)
            num = num;
        else
            return 0;
        n /= 10;
        t++;
    }
    return num;
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long int n;
        scanf("%lld", &n);
        if (cs(n) == 0)
            printf("INVALID\n");
        else
            printf("%lld\n", cs(n));
    }
}