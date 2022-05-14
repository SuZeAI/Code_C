#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int detach(char s[], char *c[])
{
    int i = 0;
    s[strlen(s) - 1] = '\0';
    char *token = strtok(s, " ");
    while (token != NULL)
    {
        c[i] = token;
        i++;
        token = strtok(NULL, " ");
    }
    return i;
}
void arrange(char *c[], int lens1)
{
    for (int i = 0; i < lens1; i++)
        for (int j = i + 1; j < lens1; j++)
            if (c[i][0] > c[j][0])
            {
                char *a[2];
                a[0] = c[i];
                c[i] = c[j];
                c[j] = a[0];
            }
}
int main()
{
    int t;
    scanf("%d", &t);
    getchar();
    while (t--)
    {
        char s1[206], s2[206];
        char *c[206], *d[206];
        fgets(s1, 206, stdin);
        fgets(s2, 206, stdin);
        int lens1 = detach(s1, c);
        int lens2 = detach(s2, d);
        arrange(c, lens1);
        bool check1[100] = {false};
        for (int i = 0; i < lens2; i++)
            for (int j = 0; j < lens1; j++)
            {
                if (strcmp(d[i], c[j]) == 0)
                    check1[j] = true;
            }
        for (int i = 0; i < lens1; i++)
            if (check1[i] == false)
            {
                printf("%s ", c[i]);
                for (int j = i + 1; j < lens1; j++)
                {
                    if (strcmp(c[i], c[j]) == 0)
                        check1[j] = true;
                }
            }
        printf("\n");
    }
}