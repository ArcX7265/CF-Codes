#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int arr[n];

for(int i=0;i<n;i++){
    cin>>arr[i];
}
if(n==1){
    cout<<0;
    
}
else{
sort(arr,arr+n);
int maxi=arr[n-1];
int sum=0;
for(int i=0;i<n;i++){
    sum+=maxi-arr[i];
}
cout<<sum;
}
return 0;
}