#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);
        string ans;
        stringstream ss(s);
        string word;
        while (ss >> word)
        {
            ans.push_back(word[0]);
        }
        cout << ans << endl;
    }
    return 0;
}