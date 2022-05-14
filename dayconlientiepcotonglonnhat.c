#include <stdio.h>
#include <math.h>
void input(int n, int a[])
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
        int n, a[100000];
        scanf("%d", &n);
        long long max_sum = -pow(10, 18), check = 0;
        input(n, a);
        for (int i = 0; i < n; i++)
        {
            check += a[i];
            if (check > max_sum)
                max_sum = check;
            if (check < 0)
                check = 0;
        }
        printf("%lld\n", max_sum);
    }
}