#include <stdio.h>
int doitien(int a[], int n)
{
    int num = 0, b;
    for (int i = 9; i >= 0; i--)
    {
        if (n >= a[i])
        {
            b = n / a[i];
            num += b;
            n = n - b * a[i];
        }
        if (n == 0)
            return num;
    }
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, a[10] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
        scanf("%d", &n);
        printf("%d\n", doitien(a, n));
    }
}