#include <stdio.h>
#include <string.h>
int main()
{
    char str[100000], s[100000], temp;
    while (scanf("%s", str) != -1)
    {
        int k = 0;
        temp = str[strlen(str) - 1];
        for (int i = strlen(str) - 1; i >= 0; i--)
        {
            if (temp < str[i])
                temp = str[i];
            if (temp == str[i])
                s[k] = temp, k++;
        }
        for (int i = k - 1; i >= 0; i--)
            printf("%c", s[i]);
        printf("\n");
    }
    return 0;
}