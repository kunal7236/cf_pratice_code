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
        if (1 & n)
        {
            cout << n << " ";
            for (int i = 1; i <= n - 1; i++)
                cout << i << " ";
            cout << endl;
        }
        else
            cout << -1 << endl;
    }
    return 0;
}