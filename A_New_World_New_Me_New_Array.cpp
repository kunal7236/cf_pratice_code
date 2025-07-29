#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, p;
        cin >> n >> k >> p;
        if (!(k >= -p * n && k <= p * n))
        {
            cout << -1 << endl;
            continue;
        }
        int ans = abs(k) / p + (abs(k) % p == 0 ? 0 : 1);
        cout << ans << endl;
    }
}