#include <stdio.h>
#include <math.h>
void nhapmang(int n, int a[])
{
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
}
int doixung(int n, int a[])
{
    for (int i = 0; i < n / 2; i++)
        if (a[i] != a[n - 1 - i])
            return 0;
    return 1;
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, a[100];
        scanf("%d", &n);
        nhapmang(n, a);
        if (doixung(n, a) == 1)
            printf("YES");
        else
            printf("NO");
        printf("\n");
    }
}