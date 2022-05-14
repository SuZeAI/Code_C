#include <stdio.h>
void nhapmang(int n, int a[])
{
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
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
        for (int j = 0; j < n; j++)
        {
            if (a[j] % 2 == 0)
                printf("%d ", a[j]);
        }
        printf("\n");
    }
}