#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, j, k;
        cin >> n >> j >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int mx = *max_element(a.begin(), a.end());
        if (k == 1 && mx != a[j - 1])
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}