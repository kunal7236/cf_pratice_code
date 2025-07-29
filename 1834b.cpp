#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string N1, N2;
        cin >> N1 >> N2;
        if (N1.size() < N2.size())
        {
            int d = N2.size() - N1.size();
            string z;
            for (int i = 0; i < d; ++i)
                z.push_back('0');
            N1 = z + N1;
        }
        int ans = 0;
        for (int i = 0; i < N1.size(); ++i)
        {
            if (N1[i] != N2[i])
            {
                ans += abs(N1[i] - N2[i]);
                ans += 9 * (N1.size() - i - 1);
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}