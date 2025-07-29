#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> up, lw;
        string s;
        cin >> s;
        int n = s.size();
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'b')
            {
                if (lw.size() == 0)
                    continue;
                lw.pop_back();
            }
            else if (s[i] == 'B')
            {
                if (up.size() == 0)
                    continue;
                ;
                up.pop_back();
            }
            else if (s[i] >= 'A' && s[i] <= 'Z')
                up.push_back(i);
            else
                lw.push_back(i);
        }
        int i = 0, j = 0;
        string ans;
        while (i < lw.size() && j < up.size())
        {
            if (lw[i] < up[j])
            {
                ans.push_back(s[lw[i]]);
                i++;
            }
            else
            {
                ans.push_back(s[up[j]]);
                j++;
            }
        }
        while (i < lw.size())
        {
            ans.push_back(s[lw[i]]);
            i++;
        }
        while (j < up.size())
        {
            ans.push_back(s[up[j]]);
            j++;
        }
        cout << ans << endl;
    }
    return 0;
}