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
        vector<int> a(n);
        vector<int> mpp(101, 0);
        int cnt = 2;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mpp[a[i]]++;
            if (mpp[a[i]] == 2 && cnt == 2)
            {
                a[i] = 2;
                cnt--;
            }
            else if (mpp[a[i]] == 2 && cnt == 1)
            {
                a[i] = 3;
                cnt--;
            }
            else
                a[i] = 1;
        }
        if (cnt != 0)
            cout << -1 << endl;
        else
        {
            for (int i = 0; i < n; i++)
                cout << a[i] << " ";
            cout << endl;
        }
    }
}