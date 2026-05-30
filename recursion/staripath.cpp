#include<bits/stdc++.h>
using namespace std;



// total ways to reach stair
int stair(int n){
    if(n==2)return 2;
    if(n==1)return 1;

    return stair(n-1)+stair(n-2);
}

int main(){
    int ans=stair(5);
    cout<<ans;
    return 0;
}