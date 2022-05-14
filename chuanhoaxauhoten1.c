#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);
    getchar();
    while (t--)
    {
        char name[82];
        gets(name);
        int i = 0;
        int len = strlen(name);
        for (int i = 0; i < len; i++)
        {
            if (name[0] >= 'a' && name[0] <= 'z')
                name[0] -= 32;
            if (name[i] != ' ' && name[i] <= 'Z' && name[i] >= 'A')
                name[i] += 32;
            if (name[i] != ' ' && name[i - 1] == ' ')
                if (name[i] >= 97)
                    name[i] -= 32;
        }
        char *token = strtok(name, " ");
        printf("%s", token);
        token = strtok(NULL, " ");
        while (token != NULL)
        {
            printf(" %s", token);
            token = strtok(NULL, " ");
        }
        printf("\n");
    }
}