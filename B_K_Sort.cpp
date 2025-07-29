#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        long long pref_max = 0, s = 0, mx = 0;
        for (int i = 0; i < n; i++)
        {
            pref_max = max(pref_max, (long long)a[i]);

            long long d = pref_max - a[i];
            s += d;
            mx = max(mx, d);
        }

        cout << s + mx << endl;
    }
    return 0;
}
