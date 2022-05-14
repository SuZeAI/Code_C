#include <stdio.h>
#include <string.h>
void lowercase(char s[])
{
    int len = strlen(s);
    for (int i = 0; i < len; i++)
        if (s[i] >= 65 && s[i] <= 90)
            s[i] += 32;
}
int main()
{
    char s[100], b[100][100];
    fflush(stdin);
    gets(s);
    lowercase(s);
    int i = 0, c[100] = {0};
    char *token = strtok(s, " ");
    while (token != NULL)
    {
        strcpy(b[i], token);
        i++;
        token = strtok(NULL, " ");
    }
    for (int j = 0; j < i; j++)
        if (c[j] == 0)
            for (int m = j + 1; m < i; m++)
                if (strcmp(b[j], b[m]) == 0)
                    c[j]++, c[m] = -1;
    for (int j = 0; j < i; j++)
        if (c[j] >= 0)
            printf("%s %d\n", b[j], c[j] + 1);
}