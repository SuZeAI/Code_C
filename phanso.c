#include <stdio.h>
int UCLN(int a, int b)
{
    if (b == 0)
        return a;
    return UCLN(b, a % b);
}
int main()
{
    int t, c = 1;
    scanf("%d", &t);
    while (t--)
    {
        printf("Case #%d:\n", c);
        int pt, pm, qt, qm;
        scanf("%d%d%d%d", &pt, &pm, &qt, &qm);
        int a = pt, b = pm, e = qt, d = qm;
        pt = pt / UCLN(a, b);
        pm = pm / UCLN(a, b);
        qt = qt / UCLN(e, d);
        qm = qm / UCLN(e, d);
        int mau, tu1, tu2, tu3, tu4, mau4;
        mau = pm * qm / UCLN(pm, qm);
        tu1 = pt * mau / pm;
        tu2 = qt * mau / qm;
        printf("%d/%d %d/%d\n", tu1, mau, tu2, mau);
        tu3 = tu1 + tu2;
        int m = tu3;
        tu3 = tu3 / UCLN(m, mau);
        mau = mau / UCLN(m, mau);
        printf("%d/%d\n", tu3, mau);
        tu4 = tu1 / UCLN(tu1, tu2);
        mau4 = tu2 / UCLN(tu1, tu2);
        printf("%d/%d\n", tu4, mau4);
        c++;
    }
}