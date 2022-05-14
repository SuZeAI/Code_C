#include <stdio.h>
#include <string.h>
void test(char s[])
{
    int odd = 0, even = 0;
    ;
    int len = strlen(s);
    if (s[0] - 48 == 0)
    {
        printf("INVALID\n");
        return;
    }
    for (int i = 0; i < len; i++)
    {
        if (s[i] < 48 || s[i] > 57)
        {
            printf("INVALID\n");
            return;
        }
        if (s[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    if (len % 2 == 0 && even > odd)
    {
        printf("YES\n");
        return;
    }
    if (len % 2 != 0 && even < odd)
    {
        printf("YES\n");
        return;
    }
    printf("NO\n");
    return;
}
int main()
{
    int t;
    scanf("%d", &t);
    getchar();
    while (t--)
    {
        char s[1000];
        gets(s);
        test(s);
    }
    return 0;
}