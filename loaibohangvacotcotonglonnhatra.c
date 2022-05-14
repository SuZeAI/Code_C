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
int tongmaxdong(int m, int n, int a[][10])
{
    int max = 0, vitri;
    for (int i = 0; i < m; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum += a[i][j];
        }
        if (max < sum)
            max = sum, vitri = i;
    }
    return vitri;
}
int tongmaxcot(int n, int m, int a[][10])
{
    int max = 0, vitri;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < m; j++)
        {
            sum += a[j][i];
        }
        if (max < sum)
            max = sum, vitri = i;
    }
    return vitri;
}
int loaibodong(int m, int n, int a[][10])
{
    int b = tongmaxdong(m, n, a);
    for (int i = 0; i < n; i++)
        for (int j = b; j < m - 1; j++)
        {
            a[j][i] = a[j + 1][i];
        }
}
int loaibocot(int m, int n, int a[][10])
{
    int b = tongmaxcot(n, m, a);
    for (int i = 0; i < m; i++)
        for (int j = b; j < n - 1; j++)
        {
            a[i][j] = a[i][j + 1];
        }
}
int main()
{
    int t, c = 0;
    scanf("%d", &t);
    while (c < t)
    {
        int n, m;
        scanf("%d%d", &m, &n);
        int a[10][10];
        nhapmang(m, n, a);
        loaibodong(m, n, a);
        loaibocot(m - 1, n, a);
        printf("Test %d:\n", c + 1);
        inmang(m - 1, n - 1, a);
        printf("\n");
        c++;
    }
    return 0;
}