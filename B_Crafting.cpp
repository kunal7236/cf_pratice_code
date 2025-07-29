#include <bits/stdc++.h>
using namespace std;
int main()
{
    long t;
    cin >> t;

    while (t--)
    {
        long n;
        cin >> n;

        vector<long> dv(n);
        for (long p = 0; p < n; p++)
        {
            cin >> dv[p];
        }

        bool ans = true;
        long diff = 0;

        for (long p = 0; p < n; p++)
        {
            long x;
            cin >> x;
            dv[p] -= x;

            if (dv[p] < 0)
            {
                if (diff != 0)
                {
                    ans = false;
                }
                else
                {
                    diff = dv[p];
                }
            }
        }

        for (long p = 0; ans && p < n; p++)
        {
            if (dv[p] < 0)
            {
                continue;
            }
            if (dv[p] + diff < 0)
            {
                ans = false;
            }
        }

        cout << (ans ? "YES" : "NO") << '\n';
    }

    return 0;
}