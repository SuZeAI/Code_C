#include <stdio.h>
#include <string.h>
void lowercase(char s[])
{
    int len = strlen(s);
    for (int i = 0; i < len; i++)
        if (s[i] >= 65 && s[i] <= 90)
            s[i] += 32;
}
void upr(char s[])
{
    int len = strlen(s);
    for (int i = 0; i < len; i++)
        s[i] -= 32;
}
int main()
{
    int t;
    scanf("%d", &t);
    getchar();
    while (t--)
    {
        char name[82];
        gets(name);
        lowercase(name);
        int i = 0;
        char *b[100];
        char *token = strtok(name, " ");
        while (token != NULL)
        {
            b[i] = token;
            i++;
            token = strtok(NULL, " ");
        }
        for (int j = 1; j < i; j++)
            b[j][0] -= 32;
        for (int k = 1; k < i - 1; k++)
            printf("%s ", b[k]);
        printf("%s, ", b[i - 1]);
        upr(b[0]);
        printf("%s\n", b[0]);
    }
}