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
        vector<int> gl(n);
        vector<int> a(n);
        int temp = 1;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            temp = max(temp, a[i]);
            gl[i] = temp;
        }
        vector<long long> suffixsum(n);
        suffixsum[0] = 0;
        for (int i = 1; i < n; i++)
        {
            suffixsum[i] = suffixsum[i - 1] + a[n - i];
        }
        for (int k = 1; k <= n; k++)
        {
            cout << suffixsum[k - 1] + gl[n - k] << " ";
        }
        cout << endl;
    }
    return 0;
}