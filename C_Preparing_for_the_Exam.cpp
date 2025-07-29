#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> a(m), b(k);
        for (auto &i : a)
            cin >> i;
        for (auto &i : b)
            cin >> i;
        if (k == n)
            cout << string(m, '1') << endl;
        else if (k <= n - 2)
            cout << string(m, '0') << endl;
        else
        {
            map<int, int> mm;
            for (int i = 0; i < k; ++i)
                ++mm[b[i]];
            for (int i = 0; i < m; ++i)
            {
                if (mm[a[i]])
                    cout << 0;
                else
                    cout << 1;
            }
            cout << endl;
        }
    }
    return 0;
}