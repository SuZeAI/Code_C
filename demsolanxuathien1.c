#include <stdio.h>
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
    int n, num, k = 0;
    scanf("%d", &n);
    int a[100], b[100000] = {0};
    nhapmang(n, a, b);
    for (int i = 0; i < n; i++)
    {
        num = 0;
        if (b[a[i]] == 1)
        {
            for (int j = 0; j < n; j++)
            {
                if (a[i] == a[j])
                {
                    b[a[i]] = 0;
                    num++;
                }
            }
            printf("%d %d\n", a[i], num);
        }
    }
    return 0;
}