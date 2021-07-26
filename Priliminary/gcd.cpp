
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
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
    int T = 0, l = 1;
    cin >> T;
    while (l <= T)
    {
        long a = 0, b = 0, m = 0, n = 0;
        int i = 0, j = 0;
        int count = 0;
        cin >> a >> b >> m;
        while (i < m)
        {
            a = a + i;
            b = b + i;
            n = gcd(a, b);
            if (n > 0)
            {
                count++;
            }
            i++;
        }
        cout << "Case " << l << ":"
             << " " << count;
        cout << "\n";
        l++;
    }

    return 0;
}