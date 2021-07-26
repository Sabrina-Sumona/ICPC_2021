#include <stdio.h>
#include <math.h>

int main()
{

    int T = 0, count = 0, i = 0, j = 0, k = 0, K = 0, l = 0;
    long N = 1;
    scanf("%d", &T);
    for (i = 0; i < T; i++)
    {
        int K;
        scanf("%d", &K);
        int a[K];
        for (j = 0; j < K; j++)
        {
            scanf("%d", &k);
            a[j] = k;
            if (K == 1)
            {
                N = a[j] * a[j];
            }
            else
            {
                N = N * a[j];
            }
        }
        for (l = 0; l < K - 1; l++)
        {
            N = N / 2;
        }
        printf("Case %d: %ld", i + 1, N);
        N = 1;
    }

    return 0;
}