#include<bits/stdc++.h>
using namespace std;
int main(){
int t;cin>>t;
while(t--){
int n;
cin>>n;
vector<int>arr;
for(int i=1;i<1667;i++){
    if(i%3==0 || i%10==3){
        continue;
    }
    else{
        arr.push_back(i);
    }
}
cout<<arr[n-1]<<endl;
}
return 0;
}