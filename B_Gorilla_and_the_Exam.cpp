#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        vector<int> cnt = {1};
        for (int i = 1; i < n; i++)
        {
            if (a[i] == a[i - 1])
            {
                cnt.back()++;
            }
            else
            {
                cnt.emplace_back(1);
            }
        }
        sort(cnt.begin(), cnt.end());
        int m = cnt.size();
        for (int i = 0; i < m - 1; i++)
        {
            if (cnt[i] > k)
            {
                cout << m - i << "\n";
                goto l1;
            }
            k -= cnt[i];
        }
        cout << 1 << "\n";
    l1:;
    }
    return 0;
}
