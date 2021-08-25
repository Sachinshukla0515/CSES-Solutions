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
 
  string s;
  cin>>s;
 
  //A cout<<s<<" ";
 
  int res=1,count=1;
  int j=0;
  
  REP(i,1,s.size()){
     
     if(s[i]==s[j]){
        count++;
       
    }
     else {
       res=max(res,count);
       j=i;
       count=1;
     }
  }
    res=max(res,count);
   cout<<res<<"\n";
 
}

int main() {
    
    solve();
    return 0;
}
