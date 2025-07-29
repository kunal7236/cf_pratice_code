#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int mn = INT_MAX, mx = INT_MIN;
        int n;
        cin >> n;
        int temp;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            mn = min(mn, temp);
            mx = max(mx, temp);
        }
        cout << mx - mn << endl;
    }
    return 0;
}