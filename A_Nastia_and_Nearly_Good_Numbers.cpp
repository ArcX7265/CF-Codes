#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        long long A, B;
        cin >> A >> B;
        if (B == 1) {
            cout << "NO\n";
            continue;
        }
        cout << "YES\n";
        cout << A << " " << A * B << " " << A * (B + 1) << "\n";
    }
}
