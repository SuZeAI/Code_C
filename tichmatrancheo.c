#include <stdio.h>
void nhapmang(int n, int a[][10])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
            a[i][j] = j + 1;
        for (int k = i + 1; k < n; k++)
            a[i][k] = 0;
    }
}
void inmang(int n, int a[][10])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
}
void chuyenvi(int n, int a[][10], int b[][10])
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            b[i][j] = a[j][i];
        }
}
void nhan2mang(int n, int a[][10], int b[][10], int d[][10])
{
    int h;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
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
        int n;
        scanf("%d", &n);
        printf("Test %d:\n", c);
        int a[10][10], b[10][10], d[10][10] = {0};
        nhapmang(n, a);
        chuyenvi(n, a, b);
        nhan2mang(n, a, b, d);
        inmang(n, d);
        c++;
    }
    return 0;
}