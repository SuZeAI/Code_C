#include <stdio.h>
int daithua(int n)
{
    if (n == 0)
        return 1;
    if (n == 1)
        return 1;
    return n * daithua(n - 1);
}
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            int dt = daithua(i) / (daithua(j) * daithua(i - j));
            printf("%d ", dt);
        }
        printf("\n");
    }
}