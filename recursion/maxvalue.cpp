#include<bits/stdc++.h>
using namespace std;

void print(int arr[],int n,int idx,int max){
    if(idx==n){
        cout<<max;
        return;
    }
    if(max<arr[idx])max=arr[idx];
    print(arr,n,idx+1,max);
    
}

//wi

int main(){
    int arr[]={5,4,3,2,3,2,1,8};
    int max=0;
    int n=sizeof(arr)/sizeof(arr[0]);
    print(arr,n,0,max);
}