#include <stdio.h>
void nhapmang(int n, int a[])
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
}
int main()
{
    int n, num = 0;
    scanf("%d", &n);
    int a[n];
    nhapmang(n, a);
    for (int i = 0; i < n; i++)
        num += a[i];
    printf("%.3f", (float)num / n);
}