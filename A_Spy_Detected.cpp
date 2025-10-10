#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++){
             cin >> a[i];
        }

        int index = -1;

        
        if (a[0] == a[1]) {
            
            for (int i = 0; i < n; i++) {
                if (a[i] != a[0]) {
                    index = i + 1; 
                    break;
                }
            }
        } 
        else {
            
            if (a[0] == a[2]){
                 index = 2;
            }     
            else {
                index = 1;
            }                  
        }

        cout << index << endl;
    }
    return 0;
}
