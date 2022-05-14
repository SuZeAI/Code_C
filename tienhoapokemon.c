#include <stdio.h>
typedef struct GIACA
{
    char name[100];
    int mon1;
    int mon2;
    int solan;
} GC;
void input(GC shop[], int n)
{
    for (int i = 0; i < n; i++)
    {
        getchar();
        gets(shop[i].name);
        scanf("%d%d", &shop[i].mon1, &shop[i].mon2);
        int soda = shop[i].mon2;
        shop[i].solan = 0;
        while (soda >= shop[i].mon1)
        {
            int a = soda / shop[i].mon1;
            shop[i].solan += a;
            soda = a * 2 + soda - a * shop[i].mon1;
        }
    }
}
void arrange(GC shop[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
            if (shop[i].solan < shop[j].solan)
            {
                GC m = shop[i];
                shop[i] = shop[j];
                shop[j] = m;
            }
    }
}
int sum(GC shop[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += shop[i].solan;
    return sum;
}
int main()
{
    int n;
    scanf("%d", &n);
    GC shop[100];
    input(shop, n);
    arrange(shop, n);
    printf("%d\n", sum(shop, n));
    printf("%s", shop[0].name);
}