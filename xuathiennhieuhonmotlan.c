#include <stdio.h>
int main()
{
    int n, a[100], check[100] = {0}, tick = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (check[i] == 0)
        {
            int num = 0;
            for (int j = i; j < n; j++)
                if (a[i] == a[j])
                    num++, check[j] = 1;
            if (num > 1)
                printf("%d ", a[i]), tick = 1;
        }
    }
    if (tick == 0)
        printf("0");
}