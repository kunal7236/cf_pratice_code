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
        int a1_even = 0, a1_odd = 0;
        int b0_even = 0, b0_odd = 0;
        string a, b;
        cin >> a >> b;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == '1')
            {
                a1_even += (i & 1) == 0 ? 1 : 0;
                a1_odd += (i & 1) == 0 ? 0 : 1;
            }
            if (b[i] == '0')
            {
                b0_even += (i & 1) == 0 ? 1 : 0;
                b0_odd += (i & 1) == 0 ? 0 : 1;
            }
        }
        if (a1_even <= b0_odd && a1_odd <= b0_even)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}