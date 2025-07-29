#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a.begin(), a.end(), greater<int>());
        int ans = 0;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] >= x)
                ans++;
            else
            {
                cnt++;
                if (a[i] * cnt >= x)
                {
                    ans++;
                    cnt = 0;
                }
            }
        }
        cout << ans << endl;
    }
}