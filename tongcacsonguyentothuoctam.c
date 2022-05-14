#include <stdio.h>
#include <math.h>
void nhapmang(int m, int a[][50])
{
    for (int i = 0; i < m; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &a[i][j]);
}
int nto(int n)
{
    if (n == 1)
        return 0;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return 0;
    return 1;
}
int sum(int m, int a[][50])
{
    int tong = 0;
    for (int j = 0; j < m; j++)
        for (int i = j; i < m; i++)
        {
            if (nto(a[j][i]) == 1)
                tong += a[j][i];
        }
    return tong;
}
int main()
{
    int m, a[50][50];
    scanf("%d", &m);
    nhapmang(m, a);
    printf("%d", sum(m, a));
}