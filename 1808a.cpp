#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l, r;
        cin >> l >> r;
        int ans = r;
        int diff = 0;
        for (int i = r; i >= l; i--)
        {
            int c = i;
            int minD = 10;
            int maxD = -1;
            while (c > 0)
            {
                int d = c % 10;
                if (d < minD)
                    minD = d;
                if (d > maxD)
                    maxD = d;
                c /= 10;
            }
            if (diff < maxD - minD)
            {
                diff = maxD - minD;
                ans = i;
            }
            if (diff == 9)
            {
                break;
            }
        }
        cout << ans << endl;
    }
}