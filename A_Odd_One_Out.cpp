#include<bits/stdc++.h>
using namespace std;
int main(){
int t;cin>>t;
while(t--){
vector<int>arr(3);
int Xor=0;

for(int i=0;i<3;i++){
    cin>>arr[i];
    Xor^=arr[i];
}
cout<<Xor<<endl;
}
return 0;
}