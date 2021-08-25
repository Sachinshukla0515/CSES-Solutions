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
 
   if(n==1) cout<<1<<"\n";
   else if(n==2||n==3) cout<<"NO SOLUTION\n";   
   else{
       
       for(int i=2;i<=n;i+=2){
         cout<<i<<" ";
       }
 
       for(int i=1;i<=n;i+=2){
        cout<<i<<" ";
       }
 
   }
 
}
 
 
 
int main() {
    
    solve();
    return 0;
}
