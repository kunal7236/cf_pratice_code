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
        int temp;
        bool flag1 = false, flag2 = false;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            if (temp > 0)
            {
                if (flag2)
                    ans = 2;
                flag1 = true;
            }
            else
            {
                if (flag1)
                    flag2 = true;
            }
        }
        if (flag1 && ans != 2)
            cout << 1 << endl;
        else
            cout << ans << endl;
    }
    return 0;
}