#include<bits/stdc++.h>
using namespace std;
int main(){
int t;cin>>t;
while(t--){
int n;
cin>>n;
int count=0;
if(n==1){
cout<<-1;
}
while(n!=1){
    if(n%6==0){
        n/=6;
        count++;
    }
    else{
        n*=2;
        count++;
    }
}
cout<<count<<endl;
}
return 0;
}