#include<bits/stdc++.h>
using namespace std;
int main(){
long long n;
cin>>n;
int x=n%4;
if(n==0){
    cout<<1<<endl;
}
else if(x==1){
    cout<<8<<endl;
}
else if(x==2){
    cout<<4<<endl;
}
else if(x==3){
    cout<<2<<endl;
}
else{
    cout<<6<<endl;
}
return 0;
}