#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long x = n / 2020;
        if (x >= n % 2020) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
