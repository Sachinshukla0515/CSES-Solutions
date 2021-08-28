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
 
  int n;
  cin>>n;
 
  // will print gray code for given 'n' in decimal form
  // for(int i=0;i<(1<<n);i++){
  //    cout<< (i^(i>>1))<<"\n";
  // }
 
  // will print all the gray code for given 'n' in binary form
  for(int i=0;i<(1<<n);i++){
     
      int val = (i^(i>>1));
      bitset<32>r(val);
      string s = r.to_string();
      cout<<s.substr(32-n)<<"\n"; 
  } 
}
 
int main() {
  solve();
  return 0;
}
