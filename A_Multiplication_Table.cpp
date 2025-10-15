#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, x;
    cin >> n >> x;

    long long count = 0;
    for (long long i = 1; i <= n; ++i) {
        if (x % i == 0) {          
            long long j = x / i;
            if (j <= n) {
                count++;
               }   
        }
    }

    cout << count << '\n';
    return 0;
}
