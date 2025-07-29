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
        vector<vector<int>> a(n, vector<int>(n - 1));
        vector<int> res(n);
        vector<int> cnt(n + 1, 0);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                cin >> a[i][j];
                if (j == 0)
                    cnt[a[i][j]]++;
            }
        }
        for (int i = 1; i <= n; i++)
        {
            if (cnt[i] == n - 1)
            {
                res[0] = i;
                break;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i][0] != res[0])
            {
                for (int j = 0; j < n - 1; j++)
                    res[j + 1] = a[i][j];
                break;
            }
        }
        for (int i = 0; i < n; i++)
            cout << res[i] << " ";
        cout << endl;
    }
}