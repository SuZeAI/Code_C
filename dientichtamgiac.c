#include <stdio.h>
#include <math.h>
typedef struct coordinate
{
    double x, y;
} cd;
void input(cd coor[])
{
    for (int i = 0; i < 3; i++)
        scanf("%lf%lf", &coor[i].x, &coor[i].y);
}
double triangle(cd coor[])
{
    double a = coor[0].x - coor[1].x;
    double b = coor[0].y - coor[1].y;
    double c = sqrt(pow(a, 2) + pow(b, 2));
    double a1 = coor[1].x - coor[2].x;
    double b1 = coor[1].y - coor[2].y;
    double c1 = sqrt(pow(a1, 2) + pow(b1, 2));
    double a2 = coor[0].x - coor[2].x;
    double b2 = coor[0].y - coor[2].y;
    double c2 = sqrt(pow(a2, 2) + pow(b2, 2));
    double perimeter_2 = (c + c1 + c2) / 2;
    double s = sqrt(perimeter_2 * (perimeter_2 - c) * (perimeter_2 - c1) * (perimeter_2 - c2));
    if (c + c1 > c2 && c1 + c2 > c && c + c2 > c1)
        return s;
    return 0;
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        cd coor[3];
        input(coor);
        double s = triangle(coor);
        if (s)
            printf("%.2lf\n", s);
        else
            printf("INVALID\n");
    }
}