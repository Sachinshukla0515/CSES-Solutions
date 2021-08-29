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
 
void TOH(int a, int b, int c, int n){
    if(n==0) return;
    TOH(a,c,b,n-1);
    cout<<a<<" "<<c<<"\n";
    TOH(b,a,c,n-1);
}
void solve(){
   
   int n;
   cin>>n;
   cout<< (1<<n)-1<<"\n";
   TOH(1,2,3,n);
  
}
int main() {
  solve();
  return 0;
}
