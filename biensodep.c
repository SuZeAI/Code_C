#include <stdio.h>
int exam(char lp[])
{
    int num = 0, c = 0;
    char a[6] = {lp[6], lp[7], lp[8], lp[10], lp[11], '\0'};
    for (int i = 0; i < 5; i++)
        if (a[i] == 54 || a[i] == 56)
            num++;
    if (num == 5)
    {
        return 1;
    }
    if (a[0] == a[1] && a[1] == a[2] && a[3] == a[4])
    {
        return 1;
    }
    if (a[0] == a[1] && a[1] == a[2] && a[2] == a[3] && a[3] == a[4])
    {
        return 1;
    }
    for (int i = 0; i < 4; i++)
        if (a[i] >= a[i + 1])
            c = 1;
    if (c == 0)
    {
        return 1;
    }
    return 0;
    ;
}
int main()
{
    int t;
    scanf("%d", &t);
    getchar();
    while (t--)
    {
        char lp[100];
        gets(lp);
        if (exam(lp) == 1)
            printf("YES\n");
        else
            printf("NO\n");
    }
}