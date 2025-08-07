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
        unordered_map<string, int> cur;
        bool found = false;
        for (int i = 0; i < n - 1; ++i)
        {
            string t = s.substr(i, 2);
            if (cur.find(t) != cur.end())
            {
                if (cur[t] < i - 1)
                {
                    cout << "YES" << endl;
                    found = true;
                    break;
                }
            }
            else
            {
                cur[t] = i;
            }
        }
        if (!found)
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}