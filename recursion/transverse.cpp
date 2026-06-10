#include<bits/stdc++.h>
// #include<vector>
using namespace std;

void display(int arr[],int n,int idx){
    if(idx==n)return;
    cout<<arr[idx]<<" ";
    display(arr,n,idx+1);
}

// for vector
void display2(vector<int>&v,int idx){
    if(idx==v.size())return;
    cout<<v[idx]<<" ";
    display2(v,idx+1);
}
int main(){
    int arr[]={2,3,4,2,4,5};
    vector<int>v={2,5,2,25,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    // display(arr,n,0 );
    display2(v,0);
}
