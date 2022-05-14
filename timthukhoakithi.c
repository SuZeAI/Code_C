#include <stdio.h>
typedef struct GIACA
{
    char name[100];
    char group[100];
    float mon1;
    float mon2;
    float mon3;
    int num;
} GC;
void input(GC shop[], int n)
{
    for (int i = 0; i < n; i++)
    {
        getchar();
        gets(shop[i].name);
        gets(shop[i].group);
        scanf("%f", &shop[i].mon1);
        scanf("%f", &shop[i].mon2);
        scanf("%f", &shop[i].mon3);
        shop[i].num = i + 1;
    }
}
void arrange(GC shop[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
            if (shop[i].mon1 + shop[i].mon2 + shop[i].mon3 < shop[j].mon1 + shop[j].mon2 + shop[j].mon3)
            {
                GC m = shop[i];
                shop[i] = shop[j];
                shop[j] = m;
            }
    }
}
void output(GC shop[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (shop[0].mon1 + shop[0].mon2 + shop[0].mon3 == shop[i].mon1 + shop[i].mon2 + shop[i].mon3)
            printf("%d %s %s %.1f\n", shop[i].num, shop[i].name, shop[i].group, shop[i].mon1 + shop[i].mon2 + shop[i].mon3);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    GC shop[100];
    input(shop, n);
    arrange(shop, n);
    output(shop, n);
}