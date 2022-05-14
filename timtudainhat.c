#include <stdio.h>
#include <string.h>
typedef struct fre
{
    char a[1000];
    int fre;
} f;
int loop(int n, f a[], char temp[])
{
    for (int i = 0; i < n; i++)
    {
        if (strcmp(temp, a[i].a) == 0)
            return i;
    }
    return -1;
}
int main()
{
    f h[1005];
    char temp[1000];
    int i = 0, max = 0;
    while (scanf("%s", &temp) != -1)
    {
        int idx = loop(i, h, temp);
        if (idx == -1)
        {
            strcpy(h[i].a, temp);
            h[i].fre = 1;
            i++;
        }
        else
            h[idx].fre++;
    }
    for (int j = 0; j < i; j++)
        if (max < strlen(h[j].a))
            max = strlen(h[j].a);
    for (int j = 0; j < i; j++)
        if (max == strlen(h[j].a))
            printf("%s %d %d\n", h[j].a, max, h[j].fre);
    return 0;
}