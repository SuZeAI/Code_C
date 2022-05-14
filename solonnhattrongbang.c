#include <stdio.h>
void nhapmang(long long int m, long long int n, long long int a[][2])
{
    for (long long int i = 0; i < m; i++)
        for (long long int j = 0; j < n; j++)
            scanf("%lld", &a[i][j]);
}
long long int timmin(long long int n, long long int j, long long int a[][2])
{
    long long int min = a[0][j];
    for (long long int i = 0; i < n; i++)
    {
        if (min > a[i][j])
            min = a[i][j];
    }
    return min;
}
int main()
{
    long long int n, a[100][2], b, c;
    scanf("%lld", &n);
    nhapmang(n, 2, a);
    b = timmin(n, 0, a);
    c = timmin(n, 1, a);
    long long int tim = b * c;
    printf("%lld", tim);
}