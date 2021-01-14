#include<bits/stdc++.h>
using namespace std;


int n,d;
int a[104];
void solve(){
    string s,t;
    cin >> s >> t;
    string s1=s,t1=t;
    while(s1.size()!=t1.size()){
        if(s1.size()>t1.size()){
            t1+=t;
        }
        else{
            s1+=s;
        }
    }
    if(s1==t1){
        cout << s1 << "\n";
    }
    else{
        cout << "-1\n" ;
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int ncase;
    cin >> ncase;
    while(ncase--){
        solve();
    }
}