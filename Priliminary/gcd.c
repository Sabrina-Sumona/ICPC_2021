#include <stdio.h>
#include <math.h>
long gcd(long a, long b)
{
    long tmp;
    while (a != 0)
    {
        tmp = a;
        a = b % a;
        b = tmp;
    }
    return b;
}
int main()
{
    int T = 0, l = 0;
    scanf("%d", &T);
    for (l = 1; l <= T; l++)
    {
        long a = 0, b = 0, m = 0, i = 0, j = 0, n = 0;
        int count = 0;
        scanf("%ld%ld%ld", &a, &b, &m);
        for (i = 0; i < m; i++)
        {
            a = a + i;
            b = b + i;
            n = gcd(a, b);
            if (n > 0)
            {
                count++;
            }
        }
        printf("Case %d: %d\n", l, count);
    }

    return 0;
}