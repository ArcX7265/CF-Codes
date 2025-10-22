#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin >> q;
    while (q--) {
        long long a, b, n, S;
        cin >> a >> b >> n >> S;

        long long use = min(S / n, a);
        long long remaining = S - use * n;

        if (remaining <= b)
            cout << "YES"<<endl;
        else
            cout << "NO"<<endl;
    }

    return 0;
}
