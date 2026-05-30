#include<bits/stdc++.h>
using namespace std;

void sumArray(int arr[],int n,int i){
    //base
    if(i>=n)return;
    cout<<arr[i]<<endl;

    sumArray(arr,n,i+1);
    

}
int main(){
    int arr[]={2,3,4,2,4};
    int n=sizeof(arr)/sizeof(arr[0]);

    sumArray(arr,n,0);

    return 0;
}

