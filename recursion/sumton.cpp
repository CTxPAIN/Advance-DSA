#include<bits/stdc++.h>
using namespace std;

int sum(int n){
    //base case
    if(n==1)return 1;

    int ans=n+sum(n-1);
    return ans;
}
gi
int main(){
    int ans=sum(5);
    cout<<ans<<endl;
    return 0;
}