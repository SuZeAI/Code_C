#include <stdio.h>
#include <math.h>
int max(int a)
{
    int num = 0;
    while (pow(2, num) <= a)
    {
        num++;
    }
    return num - 1;
}
int chuyen2(int n)
{
    int a, b = 0;
    if (n == 0)
        return 0;
    while (n > 0)
    {
        a = max(n);
        b += pow(10, a);
        n -= pow(2, a);
    }
    return b;
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", chuyen2(n));
}