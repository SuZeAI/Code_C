#include <stdio.h>
void nhapmang(int m, int n, int a[][10])
{
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
}
void inmang(int m, int n, int a[][10])
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
}
void chuyenvi(int n, int m, int a[][10], int b[][10])
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            b[i][j] = a[j][i];
        }
}
void nhan2mang(int m, int n, int p, int a[][10], int b[][10], int d[][10])
{
    int h;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < p; j++)
        {
            h = 0;
            while (h < n)
            {
                d[i][j] += a[i][h] * b[h][j];
                h++;
            }
        }
}
int main()
{
    int t, c = 1;
    scanf("%d", &t);
    while (t--)
    {
        printf("Test %d:\n", c);
        int m, n;
        scanf("%d%d", &m, &n);
        int a[10][10], b[10][10], d[10][10] = {0};
        nhapmang(m, n, a);
        chuyenvi(n, m, a, b);
        nhan2mang(m, n, m, a, b, d);
        inmang(m, m, d);
        c++;
    }
    return 0;
}