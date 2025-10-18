#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int arr[7];
for(int i=0;i<7;i++){
    cin>>arr[i];
}
int count=0;
while(n>0){
    n-=arr[count];
    if(n<=0){
        break;
    }
    count=(count+1)%7;
}
cout<<count+1<<endl;
return 0;
}