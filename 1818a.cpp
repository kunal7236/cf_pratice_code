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
        string f;
        cin >> f;
        string temp;
        int ans = 1;
        for (int i = 1; i < n; i++)
        {
            cin >> temp;
            if (temp == f)
                ans++;
        }
        cout << ans << endl;
    }
}