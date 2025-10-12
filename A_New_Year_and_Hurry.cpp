#include<bits/stdc++.h>
using namespace std;
int main(){
int n,k;
cin>>n>>k;
int time=240-k;
int count=0;
int sum=0;
int i=1;
for(int i=1;i<=n;i++){
    sum+=5*i;
    if(sum>time){
        break;
    }
    count++;
}
cout<<count;
return 0;
}