#include <bits/stdc++.h>
using namespace std;
bool issplitpossible(int n, int m)
{
    if (m == n)
        return true;
    if (n % 3 != 0)
        return false;
    int times = n / 3;
    return (issplitpossible(n - times, m) || issplitpossible(times, m));
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        if (m > n)
        {
            cout << "NO" << endl;
            continue;
        }
        if (issplitpossible(n, m))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}