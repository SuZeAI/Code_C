#include <stdio.h>
void nhapmang(int n, int a[])
{
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
}
void xapxep(int n, int a[])
{
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                int m = a[i];
                a[i] = a[j];
                a[j] = m;
            }
        }
}
int main()
{
    int n, a[100], b[100];
    scanf("%d", &n);
    nhapmang(n, a);
    xapxep(n, a);
    for (int i = 0; i < n; i++)
        if (a[i] % 2 == 0)
            printf("%d ", a[i]);
    for (int i = 0; i < n; i++)
        if (a[i] % 2 != 0)
            printf("%d ", a[i]);
    return 0;
}