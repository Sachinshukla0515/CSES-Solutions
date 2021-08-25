#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for (int i=a;i<b;i++)
typedef vector<int> VI;
typedef pair<int,int>pi;
 
 
 void solve(){
    
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    ll n;
    cin>>n;
 
    ll possible = n*(n+1)/2;
    
    if(possible%2!=0) cout<<"NO\n";
    else{
        cout<<"YES\n";
        ll sum = possible/2;
        vector<bool>mark(n+1,false);
        int count=0;
        for(int i=n;i>=1;i--){
            if(sum-i>=0){
                mark[i]=true;
                sum = sum-i;
                count++;
             }
        }
        cout<<count<<"\n"; 
        for(int i=1;i<=n;i++){
            if(mark[i]) cout<<i<<" ";
        }
        cout<<"\n";
        cout<<n-count<<"\n";
        for(int i=1;i<=n;i++){
            if(!mark[i]) cout<<i<<" ";
        }
     }
  }
 
 int main() {
    
    solve();
    return 0;
}
