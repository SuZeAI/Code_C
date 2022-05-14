#include <stdio.h>

#define scan(n) scanf("%d", &n)

int UCLN(int a, int b)
{
    while (a != b)
    {
        if (a > b)
            a -= b;
        else
            b -= a;
    }
    return a;
}

int BCNN(int a, int b)
{
    int temp = a * b / UCLN(a, b);
    return temp;
}

int main()
{
    int t;
    scan(t);
    while (t--)
    {
        int n, tmp;
        scan(n);

        int a[n];
        for (int i = 0; i < n; i++)
        {
            scan(a[i]);
        }

        printf("%d ", a[0]);
        for (int i = 0; i < n - 1; i++)
        {
            tmp = BCNN(a[i], a[i + 1]);
            printf("%d ", tmp);
        }
        printf("%d\n", a[n - 1]);
    }
    return 0;
}