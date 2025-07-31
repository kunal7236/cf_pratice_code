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
        unordered_set<int> st1, st2;
        int temp;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            st1.insert(temp);
        }
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            st2.insert(temp);
        }
        if (st1.size() + st2.size() >= 4)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}