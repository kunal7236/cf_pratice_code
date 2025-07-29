#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> a;
        for (int i = 0; i < n; i++)
        {
            vector<int> temp(m);
            for (int j = 0; j < m; j++)
            {
                cin >> temp[j];
            }
            sort(temp.begin(), temp.end());
            a.push_back(temp);
        }
        vector<int> ans(n);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (j != 0 && a[i][j] != a[i][j - 1] + n)
                {
                    goto l1;
                }
            }
            ans[a[i][0]] = i + 1;
        }
        for (int i = 0; i < n; i++)
            cout << ans[i] << " ";
        cout << endl;
        continue;
    l1:
        cout << -1 << endl;
    }
    return 0;
}