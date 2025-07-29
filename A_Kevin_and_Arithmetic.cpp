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
        int c0 = 0, c1 = 0;
        int temp;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            if (temp & 1)
                c1++;
            else
                c0++;
        }
        if (c0 > 0)
            cout << c1 + 1 << endl;
        else
            cout << c1 - 1 << endl;
    }
    return 0;
}