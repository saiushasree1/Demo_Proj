#include <bits/stdc++.h>
using namespace std;
/*--The code reads a string of digits and determines if it's possible to form a number from its digits that is divisible by 9.  It does this by checking if the original sum of the digits is divisible by 9. 
  If not, it iterates through all possible combinations of removing '2's (which reduce the sum modulo 9 by 2) and '3's (which reduce the sum modulo 9 by 6) and checks if the new sum modulo 9 becomes 0. 
  If any combination results in a sum divisible by 9, it prints "YES"; otherwise, it prints "NO". The code includes a `solve()` function to handle each test case, which is called multiple times from the
`main()` function based on the input test case count `t`--%*/
void solve(){
  string s;
      cin>>s;
      int n2=0;
      int n3=0;
      long long tot=0;
      for(int i=0;i<s.length();i++){
        if(s[i]=='2') n2++;
        if(s[i]=='3') n3++;
        tot+=(s[i]-'0');
      }
      int x=tot%9;
      if(x==0){
        cout<<"YES"<<endl;
        return;
      }
      for(int i=0;i<=n2;i++){
        for(int j=0;j<=n3;j++){
          int newi=x+i*2+j*6;
          if(newi%9==0){
            cout<<"YES"<<endl;
            return;
          }
        }
      }
      cout<<"NO"<<endl;
      return;
}
int main() {
    int t;
    cin>>t;
    while(t--){
      solve();
    }
    return 0;
}
//https://codeforces.com/problemset/problem/2050/C
