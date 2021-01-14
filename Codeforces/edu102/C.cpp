#include<bits/stdc++.h>
using namespace std;


int a[200020];
int n,k;
void solve(){
    cin >> n >> k;
    for(int i=1;i<=k;i++){
        a[i]=i;
    }
    for(int j=k-1,i=k+1;i<=n;i++,j--){
        a[i]=j;
    }
    int temp=a[n]-1;
    vector<int> p;
    for(int i=1;i<=temp;i++){
        p.push_back(i);
    }
    for(int i=temp+1,j=k;i<=k;i++,j--){
        p.push_back(j);
    }
    for(int i=0;i<k;i++){
        cout << p[i] << ' ';
    }
    cout << '\n';

    
    /*


    1 2 3 4 5 6 5 4 3 -> 9
    1 2 6 5 4 3
    1 2 6 5 4 3 4 5 6
    */
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
