#include <stdio.h>
int main()
{
    int a[3][2];
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    for (int i = 0; i < 3; i++)
        if (a[i][0] < a[i][1])
        {
            int m = a[i][0];
            a[i][0] = a[i][1];
            a[i][1] = m;
        }
    int max = a[0][0], map = 0;
    for (int i = 0; i < 3; i++)
    {
        if (max < a[i][0])
            max = a[i][0], map = i;
    }
    if (a[0][0] == a[1][0] && a[1][0] == a[2][0] && a[0][1] + a[1][1] + a[2][1] == max)
    {
        printf("YES");
        return 0;
    }
    for (int j = 0; j < 2; j++)
    {
        int n = a[0][j];
        a[0][j] = a[map][j];
        a[map][j] = n;
    }
    int hieu = a[0][0] - a[0][1];
    if (hieu == a[1][0] && hieu == a[2][0] && max == a[1][1] + a[2][1])
    {
        printf("YES");
        return 0;
    }
    if (hieu == a[1][0] && hieu == a[2][1] && max == a[1][1] + a[2][0])
    {
        printf("YES");
        return 0;
    }
    if (hieu == a[1][1] && hieu == a[2][0] && max == a[1][0] + a[2][1])
    {
        printf("YES");
        return 0;
    }
    if (hieu == a[1][1] && hieu == a[2][1] && max == a[1][0] + a[2][0])
    {
        printf("YES");
        return 0;
    }
    printf("NO");
    return 0;
}