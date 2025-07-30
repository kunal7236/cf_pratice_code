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
        for (char &c : s)
        {
            if (c != 'w')
                c = c == 'p' ? 'q' : 'p';
        }
        reverse(s.begin(), s.end());
        cout << s << endl;
    }
}