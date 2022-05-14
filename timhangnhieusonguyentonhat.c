#include <stdio.h>
#include <math.h>
void nhapmang(int m, int n, int a[][30])
{
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
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
int searchmax(int n, int b[])
{
    int max = b[0];
    for (int i = 1; i < n; i++)
        if (max < b[i])
            max = b[i];
    return max;
}
int main()
{
    int n, a[30][30], b[30];
    scanf("%d", &n);
    nhapmang(n, n, a);
    for (int i = 0; i < n; i++)
    {
        b[i] = 0;
        for (int j = 0; j < n; j++)
            if (nto(a[i][j]) == 1)
                b[i]++;
    }
    int vitri = searchmax(n, b);
    for (int i = 0; i < n; i++)
    {
        if (vitri == b[i])
        {
            printf("%d\n", i + 1);
            for (int j = 0; j < n; j++)
                if (nto(a[i][j]) == 1)
                    printf("%d ", a[i][j]);
            return 0;
        }
    }
}