#include<bits/stdc++.h>
using namespace std;
int main(){
int t;cin>>t;
while(t--){
string str;
cin>>str;
int count1=0;
int count2=0;
for(int i=0;i<5;i++){
    if(str[i]=='A'){
        count1++;
    }
    else{
        count2++;
    }
}
if(count1>count2){
    cout<<"A"<<endl;
}
else{
    cout<<"B"<<endl;
}
}
return 0;
}