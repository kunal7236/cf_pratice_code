#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        bool flag = false;
        for (int i = 0; i + 1 < n; i++)
        {
            if (s[i] == s[i + 1])
            {
                cout << s.substr(i, 2) << '\n';
                flag = true;
                break;
            }
        }
        if (flag)
            continue;
        flag = false;
        for (int i = 0; i + 2 < n; i++)
        {
            if (s[i] != s[i + 1] and s[i] != s[i + 2] and s[i + 1] != s[i + 2])
            {
                cout << s.substr(i, 3) << '\n';
                flag = true;
                break;
            }
        }
        if (flag)
            continue;
        cout << -1 << '\n';
    }
    return 0;
}