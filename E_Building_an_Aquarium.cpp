#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        long long x;
        cin >> n >> x;
        vector<long long> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        long long low = 1, high = 2e18, ans = 1;
        while (low <= high) {
            long long h = (low + high) / 2;
            long long sum = 0;
            for (int i=0;i<n;i++) {
                if (h > arr[i]) {
                    sum += h - arr[i];
                    if (sum > x) break;
                }
            }
            if (sum <= x) {
                ans = h;
                low = h + 1;
            } else {
                high = h - 1;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
