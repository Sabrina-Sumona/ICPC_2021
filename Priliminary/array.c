#include <stdio.h>

int arrayCheck(long ar[], long n)
{
    if (n == 1 || n == 0)
        return 1;
    if (ar[n - 1] < ar[n - 2])
        return 0;
    return arrayCheck(ar, n - 1);
}

int main()
{
    int T = 0, l = 0;
    scanf("%d", &T);
    for (l = 1; l <= T; l++)
    {
        int p = 0, i = 0, j = 0, tmp = 0, mov = 0;
        long N = 0, sum = 0;
        scanf("%ld", &N);
        long a[N];
        for (i = 0; i < N; i++)
        {
            scanf("%ld", &a[i]);
        }
        p = arrayCheck(a, N);
        if (p == 1)
        {
            mov = 0;
            for (i = 0; i < N; i++)
            {
                if (a[i] > 0)
                {
                    sum = sum + a[i];
                }
            }
        }
        else
        {
            mov = 1;
            for (i = 0; i < N; i++)
            {
                for (j = i + 1; j < N; j++)
                {
                    if (a[j] < a[i])
                    {
                        tmp = a[i];
                        a[i] = a[j];
                        a[j] = tmp;
                    }
                }
            }
            for (i = 0; i < N; i++)
            {
                if (a[i] > 0)
                {
                    sum = sum + a[i];
                }
            }
        }
        printf("Case %d: %ld %d\n", l, sum, mov);
    }

    return 0;
}