#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    if(!(cin >> t)) return 0;
    while (t--) {
        int a, b;
        cin >> a >> b;
        if (a == b) {
            cout << 0 << '\n';
            continue;
        }
        if (__builtin_clz(a) > __builtin_clz(b)) {
            cout << -1 << '\n';
            continue;
        }
        vector<int> ops;
        for (int i = 0; i < 31; ++i) {
            int x = 1 << i;
            if (x <= a && ((a & x) == 0)) {
                ops.push_back(x);
                a ^= x;
            }
        }
        for (int i = 0; i < 31; ++i) {
            int x = 1 << i;
            if (x <= a && ((b & x) == 0)) {
                ops.push_back(x);
                a ^= x;
            }
        }
        cout << ops.size() << '\n';
        if (!ops.empty()) {
            for (size_t i = 0; i < ops.size(); ++i) {
                if (i) cout << ' ';
                cout << ops[i];
            }
            cout << '\n';
        }
    }
    return 0;
}