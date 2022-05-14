#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int connect(const void *a, const void *b)
{
    char x[100], y[100], z[100], t[100];
    strcpy(x, (char *)a);
    strcpy(y, (char *)b);
    strcpy(z, x);
    strcpy(t, y);
    strcat(x, y);
    strcat(t, z);
    return strcmp(x, t);
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char a[100][100];
        int n;
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
            scanf("%s", &a[i]);
        qsort(a, n, sizeof(a[0]), connect);
        for (int i = 0; i < n; i++)
        {
            printf("%s", a[i]);
        }
        printf("\n");
    }
}