#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int sort(const void *a, const void *b)
{
    return *(int *)a - *(int *)b;
}
int main()
{
    int t, dem;
    scanf("%d", &t);
    for (dem = 1; dem <= t; dem++)
    {
        int n;
        scanf("%d", &n);
        int mang[n], i, j, d, logic[n], day[n], snt, a = 0;
        for (i = 0; i <= n - 1; i++)
        {
            snt = 0;
            scanf("%d", &day[i]);
            for (j = 2; j <= sqrt(day[i]); j++)
                if (day[i] % j == 0)
                    snt = 1;
            if (day[i] == 1)
                snt = 1;
            if (snt == 0)
            {
                mang[a] = day[i];
                logic[a] = 0;
                a += 1;
            }
        }
        qsort(mang, a, sizeof(mang[0]), sort);
        printf("Test %d:\n", dem);
        for (i = 0; i <= a - 1; i++)
            if (logic[i] == 0)
            {
                d = 1;
                for (j = 0; j <= a - 1; j++)
                    if (mang[i] == mang[j] && i != j)
                    {
                        logic[j] = 1;
                        d += 1;
                    }
                printf("%d ", mang[i]);
                printf("xuat hien %d lan\n", d);
            }
    }
}