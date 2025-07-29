#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int d1 = (c - a + c - b);
        if (d1 % 3 != 0)
        {
            cout << "NO" << endl;
            continue;
        }
        int d2 = (d1 / 3 + b - a);
        int d3 = (d1 / 3 - b + a);
        if (d2 & 1 || d3 & 1)
        {
            cout << "NO" << endl;
            continue;
        }
        if (d2 / 2 >= 0 && d3 / 2 >= 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}