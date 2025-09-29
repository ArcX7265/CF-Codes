#include<bits/stdc++.h>
using namespace std;
int main(){
vector<long long>arr(4);
for(int i=0;i<4;i++){
    cin>>arr[i];
}
sort(arr.begin(),arr.end());
int sum=arr[3];
int a=sum-arr[0];
int b=sum-arr[1];
int c=sum-arr[2];
cout<<a<<" "<<b<<" "<<c;

return 0;
}