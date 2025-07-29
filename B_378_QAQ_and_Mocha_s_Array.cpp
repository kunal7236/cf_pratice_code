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
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 1)
                flag = true;
        }
        if (flag)
            cout << "Yes" << endl;
        else
        {
            sort(a.begin(), a.end());
            vector<int> b;
            for (int i = 1; i < n; i++)
            {
                if (a[i] % a[0] != 0)
                    b.push_back(a[i]);
            }
            flag = false;
            for (int i = 1; i < b.size(); i++)
            {
                if (b[i] % b[0] != 0)
                {
                    flag = true;
                    break;
                }
            }
            if (flag)
                cout << "No" << endl;
            else
                cout << "Yes" << endl;
        }
    }
    return 0;
}