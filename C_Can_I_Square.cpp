#include <bits/stdc++.h>
using namespace std;

bool isPerfectSquare(long long x) {
    long long s = sqrtl(x);
    return s * s == x;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        long long sum = 0;
        for (int i = 0; i < n; i++) {
            long long a;
            cin >> a;
            sum += a;
        }

        if (isPerfectSquare(sum))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
