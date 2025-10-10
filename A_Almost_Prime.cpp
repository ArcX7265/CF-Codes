#include <bits/stdc++.h>
using namespace std;

bool isPrime(int x) {
    if (x < 2){
         return false;
    }
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;

    int count = 0;

    for (int i = 1; i <= n; i++) {
        int distinctPrimes = 0;

        
        for (int p = 2; p <= i; p++) {
            if (isPrime(p) && i % p == 0) {
                distinctPrimes++;
            }
        }

        if (distinctPrimes == 2)
            count++;
    }

    cout << count << endl;
    return 0;
}
