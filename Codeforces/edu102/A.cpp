#include<bits/stdc++.h>
using namespace std;


int n,d;
int a[104];
void solve(){
    scanf("%d%d",&n,&d);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]+a[j]<=d){
                printf("YES\n");
                return ;
            }
        }
    }
    for(int i=0;i<n;i++){
        if(a[i]>d){
            printf("NO\n");
            return ;
        }
    }
    printf("YES\n");
    
}
int main(){
    int ncase;
    scanf("%d",&ncase);
    while(ncase--){
        solve();
    }
}