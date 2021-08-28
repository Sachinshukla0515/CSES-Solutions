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
  
  string s;
  cin>>s;
 
  vector<int>freq(26,0);
  for(int i=0;i<s.size();i++){
     freq[s[i]-'A']++;
  }
   
   int odd=0;  
   string first="",second="";
   for(int i=0;i<26;i++){
     if(freq[i]%2==0){
        int count=freq[i]/2;
        while(count--){
           char p = i+'A'; 
           first.push_back(p);
           second.push_back(p); 
        }
     }
     else if(freq[i]%2!=0) odd++;
   }
 
   if(odd>1){
    cout<<"NO SOLUTION\n";
    return;
  }
  
   for(int i=0;i<26;i++){
     if(freq[i]%2!=0){
        while(freq[i]--){
          char p = i+'A';
          first.push_back(p);
        }
     }
   }
   reverse(second.begin(),second.end());
   first+=second;
   cout<<first<<"\n";
}

int main() {
  solve();
  return 0;
}
 
