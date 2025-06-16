#include <bits/stdc++.h>
using namespace std;

/*The `solve()` function implements the core logic. It modifies the input string `s`: if the first character is 's',
  it changes it to '.'; if the last character is 'p', it changes it to '.'. 
  After these modifications, it checks if the string contains both 'p' and 's'. If both characters are present, it prints "NO"; otherwise, it prints "YES".*/
void solve(){
  int n;
  cin>>n;
  string s;
  cin>>s;
  bool p=false;
  bool si=false;
  if(s[0]=='s') s[0]='.';
  if(s[n-1]=='p')s[n-1]='.';
  for(int i=0;i<n;i++){
    if(s[i]=='p') p=true;
    if(s[i]=='s') si=true;
  }
  if(p && si) cout<<"NO"<<endl;
  else cout<<"YES"<<endl;
  return;
}
int main() 
{
    int t;
    cin>>t;
    while(t--){
      solve();
    }
    return 0;
}
