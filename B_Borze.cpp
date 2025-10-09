#include<bits/stdc++.h>
using namespace std;
int main(){
string str;
cin>>str;
string out="";
for(int i=0;i<str.length();i++){
    if(str[i]=='.'){
        out+='0';
    }
    else if(str[i]='-' && str[i+1]=='.'){
        out+='1';
        i++;
    }
    else if(str[i]='-' && str[i+1]=='-'){
        out+='2';
        i++;
    }
}
cout<<out;

return 0;
}