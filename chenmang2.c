#include <stdio.h>
void nhapmang(int n, int a[])
{
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
}
void inmang(int n, int a[])
{
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
}
int main()
{
    int t, c = 0;
    scanf("%d", &t);
    while (c < t)
    {
        int n, m, p;
        scanf("%d%d%d", &n, &m, &p);
        int a[100], b[100];
        nhapmang(n, a);
        nhapmang(m, b);
        for (int i = n + m - 1; i >= m + p; i--)
        {
            a[i] = a[i - m];
        }
        for (int j = p; j < p + m; j++)
        {
            a[j] = b[j - p];
            n++;
        }
        printf("Test %d:\n", c + 1);
        inmang(n, a);
        printf("\n");
        c++;
    }
    return 0;
}