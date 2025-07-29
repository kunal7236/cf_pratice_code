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
        vector<int> hsh(26, 0);
        hsh[s[0] - 'a']++;
        hsh[s[n - 1] - 'a']++;
        bool flag = false;
        for (int i = 1; i < n - 1; i++)
        {
            if (hsh[s[i] - 'a'] != 0)
            {
                flag = true;
                break;
            }
            hsh[s[i] - 'a']++;
        }
        if (flag)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
}