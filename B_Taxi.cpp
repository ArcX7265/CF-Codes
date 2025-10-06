#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
vector<int>arr(5);
for(int i=0;i<n;i++){
int x;
cin>>x;
arr[x]++;
}
int taxi=arr[4];
int m=min(arr[3],arr[1]);
taxi+=arr[3];
arr[1]-=m;
taxi+=arr[2]/2;
if(arr[2]%2==0){
taxi++;
arr[1]=max(0,arr[1]-2);
}
if(arr[1]>0){
     taxi+=(arr[1]+3)/4;
}
cout<<taxi;
}
