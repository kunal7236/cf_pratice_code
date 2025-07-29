#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    vector<pair<int, pair<int, char>>> vec;
    int prefixbalance = 0;
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        vec.push_back({prefixbalance, {i + 1, s[i]}});
        if (s[i] == '(')
            prefixbalance += 1;
        else
            prefixbalance -= 1;
    }
    sort(vec.begin(), vec.end(), [](pair<int, pair<int, char>> &a, pair<int, pair<int, char>> &b)
         {
        if(a.first!=b.first)
         return a.first<b.first;
        return a.second.first>b.second.first; });
    string ans;
    for (auto &it : vec)
    {
        ans.push_back(it.second.second);
    }
    cout << ans << endl;
}