#include <stdio.h>
void nhapmang(int n, int a[][2])
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < 2; j++)
            scanf("%d", &a[i][j]);
}
void sapxep(int n, int a[][2])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n - 1; j++)
            if (a[i][0] > a[j + 1][0])
            {
                int m = a[i][0];
                a[i][0] = a[j + 1][0];
                a[j + 1][0] = m;
                int p = a[i][1];
                a[i][1] = a[j + 1][1];
                a[j + 1][1] = p;
            }
    }
}
int tong(int n, int a[][2])
{
    int tong1 = a[0][0] + a[0][1];
    for (int i = 1; i < n; i++)
    {
        if (tong1 >= a[i][0])
            tong1 += a[i][1];
        else
            tong1 = a[i][0] + a[i][1];
    }
    return tong1;
}
int main()
{
    int n, a[100][2], b;
    scanf("%d", &n);
    nhapmang(n, a);
    sapxep(n, a);
    b = tong(n, a);
    printf("%d", b);
    return 0;
}