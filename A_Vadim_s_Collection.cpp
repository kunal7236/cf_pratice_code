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
        string ans;
        vector<int> freq(10, 0);
        for (int i = 0; i < 10; i++)
        {
            freq[s[i] - '0']++;
        }
        for (int i = 1; i <= 10; i++)
        {
            for (int j = 10 - i; j <= 9; j++)
            {
                if (freq[j] > 0)
                {
                    ans.push_back(j + '0');
                    freq[j]--;
                    break;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}