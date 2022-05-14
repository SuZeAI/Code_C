#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int detach(char s[], char *c[])
{
    int i = 0;
    char *token = strtok(s, " ");
    while (token != NULL)
    {
        c[i] = token;
        i++;
        token = strtok(NULL, " ");
    }
    return i;
}
void sapxep(char *c[], int lens1)
{
    for (int i = 0; i < lens1; i++)
        for (int j = i + 1; j < lens1; j++)
            if (c[i][0] > c[j][0])
            {
                char *a[1];
                a[0] = c[i];
                c[i] = c[j];
                c[j] = a[0];
            }
}
int main()
{
    fflush(stdin);
    char s1[100], s2[100];
    char *c[100], *d[100];
    gets(s1);
    gets(s2);
    int lens1 = detach(s1, c);
    int lens2 = detach(s2, d);
    sapxep(c, lens1);
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
}