#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    int q;
    cin >> q;

    while(q--){
        long long x;
        cin >> x;
        cout << (upper_bound(arr.begin(), arr.end(), x) - arr.begin()) << "\n";
    }

    return 0;
}
