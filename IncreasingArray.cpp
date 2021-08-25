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
 
   VI nums(n);
   REP(i,0,n) cin>>nums[i];
 
   ll res=0;
  
  REP(i,1,n){
     if(nums[i]<nums[i-1]){
        res+=(nums[i-1]-nums[i]);
        nums[i]=nums[i-1];
    }
  }
   
   cout<<res<<"\n";
}
 
 int main() {
    
    solve();
    return 0;
}
