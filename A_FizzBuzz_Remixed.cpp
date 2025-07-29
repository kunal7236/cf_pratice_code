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
        int ans = n / 15 * 3;
        n = n % 15;
        for (int i = 0; i <= n; i++)
        {
            if (i % 3 == i % 5)
                ans++;
        }
        cout << ans << endl;
    }
    return 0;
}