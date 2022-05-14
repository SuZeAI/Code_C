#include <stdio.h>
#include <math.h>
void nhapmang(int n, int a[])
{
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
}
int snt(int i)
{
    if (i == 2 || i == 3)
        return 1;
    if (i == 1)
        return 0;
    for (int j = 2; j <= sqrt(i); j++)
        if (i % j == 0)
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
        for (int i = 0; i < n; i++)
            if (snt(a[i]) == 1)
                printf("%d ", a[i]);
        printf("\n");
    }
}