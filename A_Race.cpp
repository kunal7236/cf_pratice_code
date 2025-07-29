#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, x, y;
        cin >> a >> x >> y;
        // int dist = min(abs(a - x), abs(a - y));
        int side = (x - a) * (y - a);
        if (side > 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}