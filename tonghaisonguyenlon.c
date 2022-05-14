#include <stdio.h>
#include <string.h>
int sum_char(char so1[], char so2[], char sum[])
{
    int lenso1 = strlen(so1), k = 0;
    int lenso2 = strlen(so2), m = 0;
    char max1[505], min1[505];
    if (strlen(so1) > strlen(so2))
    {
        strcpy(max1, so1);
        strcpy(min1, so2);
    }
    else
    {
        strcpy(max1, so2);
        strcpy(min1, so1);
    }
    int a = strlen(max1);
    int b = strlen(min1);
    for (int g = a - 1; g >= 0; g--)
    {
        if (b < 1)
            min1[b - 1] = '0';
        sum[k] = max1[a - 1] - 48 + min1[b - 1] + m;
        if (sum[k] >= 58)
            sum[k] -= 10, m = 1;
        else
            m = 0;
        k++, a--, b--;
    }
    if (m == 1)
        printf("1");
    return k;
}
int main()
{
    int t;
    scanf("%d", &t);
    getchar();
    while (t--)
    {
        char so1[505], so2[505], sum[505];
        gets(so1);
        gets(so2);
        int sum_number = sum_char(so1, so2, sum);

        for (int i = sum_number - 1; i >= 0; i--)
            printf("%c", sum[i]);
        printf("\n");
    }
}