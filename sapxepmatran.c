#include <stdio.h>
int main()
{
    int x, test = 1;
    scanf("%d", &x);
    while (x--)
    {
        int m, n, i, j, k, l;
        scanf("%d %d", &m, &n);
        int a[100][100];
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                for (k = i; k < m; k++)
                {
                    for (l = j; l < n; l++)
                    {
                        if (a[i][j] > a[k][l])
                        {
                            int temp = a[i][j];
                            a[i][j] = a[k][l];
                            a[k][l] = temp;
                        }
                    }
                }
            }
        }
        printf("Test %d:\n", test);
        test++;
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                printf("%d ", a[i][j]);
            }
            printf("\n");
        }
    }
}