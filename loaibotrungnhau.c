#include <stdio.h>
#include <math.h>
void nhapmang(int n, int a[], int b[])
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        b[a[i]] = 1;
    }
}
int main()
{
    int n, num;
    scanf("%d", &n);
    int a[100], b[100000] = {0};
    nhapmang(n, a, b);
    for (int i = 0; i < n; i++)
        if (b[a[i]] == 1)
        {
            b[a[i]] = 0;
            printf("%d ", a[i]);
        }
    return 0;
}