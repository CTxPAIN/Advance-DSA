#include<bits/stdc++.h>
using namespace std;

int maze(int sr,int sc,int er,int ec){
    if(sr>er||sc>ec)return 0;
    if(sr==er&&sc==ec)return 1;

    int rightways=maze(sr,sc+1,er,ec);
    int downways=maze(sr+1,sc,er,ec);
    return rightways+downways;
}
// using two variable only
int maze2(int endrow,int endcol){
    if(endrow<1||endcol<1)return 0;
    if(endrow==1&&endcol==1)return 1;

    int rightways=maze2(endrow,endcol-1);
    int downways=maze2(endrow-1,endcol);
    int totalways=rightways+downways;
    return totalways;
}

void path(int sr,int sc,int er,int ec,string s){
     if(sr>er||sc>ec)return ;
    if(sr==er&&sc==ec){
        cout<<s<<endl;
        return;
    }

    path(sr,sc+1,er,ec,s+"R");
    path(sr+1,sc,er,ec,s+"D");
   
}

void path2(int er,int ec,string s){
     if(er<1||ec<1)return ;
    if(er==1&&ec==1){
        cout<<s<<endl;
        return;
    }
    path2(er,ec-1,s+"R");
    path2(er-1,ec,s+"D");
}
int main(){
    // int ans=maze(1,1,3,3);
    // cout<<ans<<endl;
    // path(1,1,3,3,"");
    // int ans2=maze2(3,4);
    // cout<<ans2<<endl;
    path2(3,3,"");
}