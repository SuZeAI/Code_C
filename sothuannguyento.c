#include <stdio.h>
#include <math.h>
int snt(int n)
{
    if (n == 0 || n == 1)
        return 0;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return 0;
    return 1;
}
int chusont(int n)
{
    int a;
    while (n)
    {
        a = n % 10;
        if (a != 2 && a != 3 && a != 5 && a != 7)
            return 0;
        n /= 10;
    }
    return 1;
}
int sumchusont(int n)
{
    int a, sum = 0;
    while (n)
    {
        a = n % 10;
        sum += a;
        n /= 10;
    }
    if (snt(sum) == 1)
        return 1;
    return 0;
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a, b, num = 0;
        scanf("%d%d", &a, &b);
        for (int i = a; i <= b; i++)
            if (snt(i) == 1 && chusont(i) == 1 && sumchusont(i) == 1)
                num++;
        printf("%d\n", num);
    }
}