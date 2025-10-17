#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n % 2 == 1) {
            for (int i = 0; i < n; ++i) {
                if (i) cout << ' ';
                cout << 1;
            }
            cout << '\n';
        } else {
            for (int i = 0; i < n - 2; ++i) {
                cout << 2 << ' ';
            }
            cout << 1 << ' ' << 3 << '\n';
        }
    }
    return 0;
}
