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
        vector<int> a;
        vector<int> b;
        int temp;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            a.push_back(temp);
        }
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            b.push_back(temp);
        }
        bool flag = false;
        if (a == b)
            flag = true;
        reverse(b.begin(), b.end());
        if (a == b)
            flag = true;
        if (flag)
            cout << "Bob\n";
        else
            cout << "Alice\n";
    }
    return 0;
}