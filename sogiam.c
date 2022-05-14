#include <stdio.h>
int giam(int n)
{
    int i = 0, a[8], b;
    while (n > 0)
    {
        b = n % 10;
        a[i] = b;
        n /= 10;
        i++;
    }
    for (int j = 0; j < i - 1; j++)
        if (a[j] >= a[j + 1])
            return 0;
    return 1;
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
        {
            if (giam(i) == 1)
                num++;
        }
        printf("%d\n", num);
    }
}