#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for (int i=a;i<b;i++)
typedef vector<int>vi;
typedef pair<int,int>pi;
 
 
void solve(){
    
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int n;
    cin>>n;
 
    vi v(n,0);
    REP(i,0,n-1) {
       int p;
       cin>>p;
       v[p-1]=1;
    }
 
    REP(i,0,n)
        if(v[i]==0) cout<<i+1<<"\n";
 }
 
 
int main() {
    
    solve();
    return 0;
}
 
 
 
 
	
