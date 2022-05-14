#include <stdio.h>
#include <math.h>
int snt(int n)
{
    for (int j = 2; j <= sqrt(n); j++)
        if (n % j == 0)
            return 0;
    return 1;
}
int tongchia5(int n)
{
    int a, sum = 0;
    while (n)
    {
        a = n % 10;
        sum += a;
        n /= 10;
    }
    if (sum % 5 == 0)
        return 1;
    return 0;
}
int main()
{
    int n, num = 0;
    scanf("%d", &n);
    for (int i = 5; i <= n; i++)
        if (snt(i) == 1 && tongchia5(i) == 1)
            printf("%d ", i), num++;
    printf("\n%d", num);
}