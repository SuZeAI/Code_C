#include <stdio.h>
#include <math.h>
int snt(int n)
{
    if (n < 2)
        return 0;
    else
    {
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
                return 0;
        }
        return 1;
    }
}
void nhap(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
}
int main()
{
    int n, a[100], dem = 0;
    scanf("%d", &n);
    nhap(a, n);
    for (int i = 0; i < n; i++)
        if (snt(a[i]) == 1)
            dem++;
    printf("%d ", dem);
    for (int i = 0; i < n; i++)
    {
        if (snt(a[i]) == 1)
        {
            printf("%d ", a[i]);
        }
    }
    return 0;
}