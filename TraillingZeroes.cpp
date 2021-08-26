#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define ull unsigned long long
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for (int i=a;i<b;i++)
typedef vector<int> VI;
typedef pair<int,int>pi;
int mod=1e9+7;
 
 
 void solve(){
    
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    ll n;
    cin>>n;
    
    ll res=0;
    while(n){
        res+=n/5;
        n=n/5;
    }
    cout<<res<<"\n";
    
}
int main() {
    
    solve();
    return 0;
}
