#include <stdio.h>
int tong(int j, int n, int check[])
{
    int sum = 0;
    for (int i = j; i < n; i++)
    {
        ++sum;
        if (i == n - 1)
        {
            if (check[i] == 0)
            {
                return sum;
            }
            else
                return sum - 1;
        }
        if (check[i] != 0)
            return sum - 1;
    }
}
void nhap(int M, int a[])
{
    for (int i = 0; i < M; i++)
        scanf("%d", &a[i]);
}
int max(int N, int check[], int gapdoi)
{
    int num = 0;
    for (int g = 0; g < N; g++)
        if (check[g] == 0)
        {
            int sum = tong(g, N, check);
            if (sum % gapdoi == 0)
                num += sum / gapdoi;
            else
            {
                int b = sum / gapdoi;
                num += b + 1;
            }
            g += sum - 1 + gapdoi;
        }
    return num;
}
int main()
{
    int N, M, K, a[1000], num;
    scanf("%d%d%d", &N, &M, &K);
    int check[1000] = {0}, gapdoi = 2 * K + 1;
    nhap(M, a);
    for (int i = 0; i < M; i++)
    {
        for (int j = a[i] - 1; j <= a[i] - 1 + K && j < N; j++)
            check[j]++;
        for (int k = a[i] - 2; k >= a[i] - K - 1 && k >= 0; k--)
            check[k]++;
    }

    num = max(N, check, gapdoi);
    printf("%d", num);

    return 0;
}