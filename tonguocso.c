#include <stdio.h>
#include <math.h>
int main()
{

    int n, max = 0, A[2000006] = {0};
    long long tong = 0;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i <= n - 1; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] > max)
            max = a[i];
    }
    A[0] = A[1] = 1;
    for (int i = 2; i <= sqrt(max); i++)
        if (!A[i])
            for (int j = pow(i, 2); j <= max; j += i)
                if (!A[j])
                    A[j] = i;
    for (int i = 2; i <= max; i++)
        if (!A[i])
            A[i] = i;
    for (int i = 0; i <= n - 1; i++)
    {
        int x = a[i];
        while (x != 1)
        {
            tong += A[x];
            x /= A[x];
        }
    }
    printf("%lld", tong);
    return 0;
}