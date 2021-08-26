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
 
    ll a,b;
    cin>>a>>b;
    
    if((a+b)%3==0 && min(a,b)*2>=max(a,b)) cout<<"YES\n";
    else cout<<"NO\n";                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          
 }
 int main() {
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
