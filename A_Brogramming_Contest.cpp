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
        string s;
        cin >> s;

        int ans = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] != s[i + 1])
                ans++;
        }

        if (s[0] == '1')
            ans++;
        cout << ans << "\n";
    }
    return 0;
}