#include <stdio.h>
void nhapmang(int n, int a[])
{
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[100];
    nhapmang(n, a);
    for (int i = 0; i < n; i++)
        if (a[i] % 2 == 0)
            printf("%d ", a[i]);
    printf("\n");
    for (int i = 0; i < n; i++)
        if (a[i] % 2 != 0)
            printf("%d ", a[i]);
    return 0;
}