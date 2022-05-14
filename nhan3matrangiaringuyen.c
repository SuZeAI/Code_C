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
    int m, n, p, q, a[10][10], b[10][10], c[10][10], d[10][10] = {0}, e[10][10] = {0};
    scanf("%d%d%d%d", &m, &n, &p, &q);
    nhapmang(m, n, a);
    nhapmang(n, p, b);
    nhapmang(p, q, c);
    nhan2mang(m, n, p, a, b, d);
    nhan2mang(m, p, q, d, c, e);
    inmang(m, q, e);
}