#include <bits/stdc++.h>
using namespace std;

// int power(int a,int b){
//     int p=1;
//     for(int i=1;i<=b;i++){
//         p*=a;
//     }
//     return p;
// }
// int main(){
//    int ans= power(2,4);
//    cout<<ans<<endl;
//    return 0;
// }

//recursion method
int power(int a,int b){
    if(b==0)return 1;
    int ans=a*power(a,b-1);
    return ans;
}


int main(){
    int ans=power(2,4);
    cout<<ans;
    return 0;
}