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
        int prev = 1, temp;
        bool flag1 = false, flag2 = false;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            if (temp == 0)
            {
                flag2 = true;
                if (prev == 0)
                    flag1 = true;
            }
            prev = temp;
        }
        if (flag1 || !flag2)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}