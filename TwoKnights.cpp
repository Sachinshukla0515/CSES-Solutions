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
 
    int n;
    cin>>n;
 
    for(int i=1;i<=n;i++){
        ll k1 = i*i;  // nuber of ways to place first knight
        ll k2 = k1-1; // numebr of ways to place second knight
        ll totalWays = (k1*k2)/2; // total number of ways to place 2 knights without any consideration
        ll attackPos = 4*(i-1)*(i-2); // total numner of attack places
        cout<<totalWays-attackPos<<"\n"; // remaing safe position for 2 knights
    }
 
    
}
 int main() {
    
    solve();
    return 0;
}
