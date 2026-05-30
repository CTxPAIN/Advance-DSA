#include<bits/stdc++.h>
using namespace std;

int counting(int n){
    //base case
    if(n==0)return 0;
  //processing 
  
    cout<<n;
   //recurence relation
    counting(n-1);

    
}

int main(){
    int ans=counting(8);
    cout<<ans;
    return 9;
}