#include <stdio.h>
void nhapmang(int n, int a[])
{
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
}
void inmang(int j, int n, int a[])
{
    for (int i = j; i < n; i++)
        printf("%d ", a[i]);
}
int dodaimax(int n, int a[])
{
    int num = 0, max = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] < a[i + 1])
            num++;
        else
        {
            if (max < num)
                max = num;
            num = 0;
        }
    }
    return max;
}
void inmax(int n, int a[], int max)
{
    int num = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] < a[i + 1])
            num++;
        if (a[i] >= a[i + 1] || i == n - 2)
        {
            if (max == num + 1)
            {
                if (i == n - 2 && a[i] < a[i + 1])
                    inmang(n - max, n, a);
                else
                    inmang(i + 1 - max, i + 1, a);
                printf("\n");
            }
            num = 0;
        }
    }
}
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n, a[100], dodai;
        scanf("%d", &n);
        nhapmang(n, a);
        printf("Test %d:\n", i + 1);
        dodai = dodaimax(n, a) + 1;
        printf("%d\n", dodai);
        inmax(n, a, dodai);
    }
    return 0;
}
