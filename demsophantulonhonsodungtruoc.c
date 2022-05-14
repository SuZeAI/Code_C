#include <stdio.h>
void nhapmang(int n, int a[])
{
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
}
int dem(int n, int a[], int j)
{
    for (int i = 0; i < j; i++)
    {
        if (n < a[i])
            return 0;
        ;
    }
    return 1;
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, num = 1;
        scanf("%d", &n);
        int a[100];
        nhapmang(n, a);
        for (int i = 1; i < n; i++)
        {
            if (dem(a[i], a, i) == 1)
                num++;
        }
        printf("%d\n", num);
    }
    return 0;
}