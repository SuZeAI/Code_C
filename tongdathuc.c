#include <stdio.h>
#include <string.h>
void solve(char s[], int so[])
{
    for (int i = 0; i < strlen(s); i++)
        if (48 <= s[i] && s[i] <= 57)
        {
            int temp = 0;
            while (48 <= s[i] && s[i] <= 57)
                temp = temp * 10 + s[i] - 48, ++i;
            i += 3;
            int mu = 0;
            while (48 <= s[i] && s[i] <= 57)
                mu = mu * 10 + s[i] - 48, ++i;
            so[mu] += temp;
        }
}
int main()
{
    int t;
    scanf("%d", &t);
    getchar();
    while (t--)
    {
        int so[10001] = {0}, cout;
        char dt1[10000], dt2[10000];
        gets(dt1), gets(dt2);
        solve(dt1, so);
        solve(dt2, so);
        for (int i = 10000; i >= 0; i--)
            if (so[i])
            {
                printf("%d*x^%d", so[i], i);
                cout = i;
                break;
            }
        for (int i = cout - 1; i >= 0; i--)
            if (so[i])
                printf(" + %d*x^%d", so[i], i);
        printf("\n");
    }
}