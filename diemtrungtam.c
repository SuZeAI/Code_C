#include <stdio.h>
void nhapmang(int n, int a[])
{
    for (int i = 0; i < n; i += 2)
    {
        scanf("%d%d", &a[i], &a[i + 1]);
    }
}
int main()
{
    int n, a[200000], m, p = 0;
    scanf("%d", &n);
    if (n == 1 && n == 2)
    {
        printf("No");
        return 0;
    }
    nhapmang(2 * (n - 1), a);
    if (a[0] == a[2])
        m = a[0];
    if (a[0] == a[3])
        m = a[0];
    if (a[1] == a[2])
        m = a[1];
    if (a[1] == a[3])
        m = a[1];
    if (a[0] != a[2] && a[0] != a[3] && a[1] != a[2] && a[1] != a[3])
    {
        printf("No");
        return 0;
    }
    for (int i = 0; i < 2 * (n - 1); i++)
        if (m == a[i])
            p++;
    if (p == n - 1)
        printf("Yes");
    else
        printf("No");
}