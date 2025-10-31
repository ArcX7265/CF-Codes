#include<bits/stdc++.h>
using namespace std;
int main(){
int t;cin>>t;
while(t--){
long long x,y,a,b;
cin>>x>>y>>a>>b;
if(x<y){
    swap(x,y);
}
long long cost=y*min(b,2*a)+(x-y)*a;
cout<<cost<<endl;

}
return 0;
}