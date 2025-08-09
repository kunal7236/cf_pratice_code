#include <iostream>
using namespace std;

bool canReduceToZero(long long x) {
    return (x % 33 == 0);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long x;
        cin >> x;
        if (canReduceToZero(x)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}