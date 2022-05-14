#include <stdio.h>
#include <string.h>
typedef struct roman_number
{
    char c;
    int num;
} RN;
int main()
{
    RN slm[7];
    slm[0].c = 'I';
    slm[0].num = 1;
    slm[1].c = 'V';
    slm[1].num = 5;
    slm[2].c = 'X';
    slm[2].num = 10;
    slm[3].c = 'L';
    slm[3].num = 50;
    slm[4].c = 'C';
    slm[4].num = 100;
    slm[5].c = 'D';
    slm[5].num = 500;
    slm[6].c = 'M';
    slm[6].num = 1000;
    int t;
    scanf("%d", &t);
    getchar();
    while (t--)
    {
        char number[50];
        int a[50];
        gets(number);
        for (int j = 0; j < strlen(number); j++)
            for (int i = 0; i < 7; i++)
                if (number[j] == slm[i].c)
                    a[j] = slm[i].num;
        int sum = a[strlen(number) - 1];
        for (int i = 0; i < strlen(number) - 1; i++)
            if (a[i] >= a[i + 1])
                sum += a[i];
            else
                sum -= a[i];
        printf("%d\n", sum);
    }
}