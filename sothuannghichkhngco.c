#include <stdio.h>
int stn(int n)
{
    int a = n, c, sum = 0;
    while (n)
    {
        c = n % 10;
        if (c == 9)
            return 0;
        sum = sum * 10 + c;
        n /= 10;
    }
    if (a == sum)
        return 1;
    return 0;
}
int main()
{
    int n, num = 0;
    scanf("%d", &n);
    for (int i = 2; i < n; i++)
        if (stn(i) == 1)
            printf("%d ", i), num++;
    printf("\n%d", num);
}