#include <bits/stdc++.h>
using namespace std;
const int MAX = 50000;

int main()
{
    vector<int> last(MAX + 777, 0);
    int t;
    cin >> t;
    while (t--)
    {
        int m;
        cin >> m;
        vector<vector<int>> a_(m);
        for (int day = 0; day < m; ++day)
        {
            int n;
            cin >> n;
            vector<int> a(n);
            for (int i = 0; i < n; ++i)
            {
                cin >> a[i];
                last[a[i]] = day;
            }
            a_[day] = a;
        }
        vector<int> ans(m, -1);
        bool valid = true;
        for (int day = 0; day < m; ++day)
        {
            for (int x : a_[day])
            {
                if (last[x] == day)
                {
                    ans[day] = x;
                }
            }
            if (ans[day] == -1)
            {
                cout << -1 << endl;
                valid = false;
                break;
            }
        }
        if (valid)
        {
            for (int i = 0; i < m; ++i)
            {
                if (i > 0)
                    cout << " ";
                cout << ans[i];
            }
            cout << endl;
        }
    }
    return 0;
}