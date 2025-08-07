#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b, c;
        cin >> n >> a >> b >> c;
        int sum = a + b + c;
        int ans = n / sum * 3;
        if (n % sum == 0)
            cout << ans << endl;
        else if (n % sum <= a)
            cout << ans + 1 << endl;
        else if (n % sum <= a + b)
            cout << ans + 2 << endl;
        else
            cout << ans + 3 << endl;
    }
}