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
vector<string>res;
 
void findStrings(string s,int left, int right){
    if(left==right){
      res.push_back(s);
      return;
    }
 
    for(int i=left;i<right;i++){
      if(i!=left && s[i]==s[left]) continue;
      swap(s[i],s[left]);
      findStrings(s,left+1,right);
     }
  }
 
void solve(){
   
   string s;
   cin>>s;
   sort(s.begin(), s.end());
   findStrings(s,0,s.size());
 
   cout<<res.size()<<"\n";
   for(auto x:res){
    cout<<x<<"\n";
   }
  
}
  
 
int main() {
  solve();
  return 0;
}
