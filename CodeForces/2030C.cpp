// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
//the code determines whether a string `s` satisfies a condition related to the density of '0's around '1's, with special handling for very short strings. The specific problem link at the end provides context for the exact condition being checked.
int main() {
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      string s;
      cin>>s;
      if(s.length()==2){
        if(s[0]=='0' && s[1]=='0') cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
      }
      else if(s.length()==1){
        if(s[0]=='0') cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
      }
      else{
      bool x=false;
      for(int i=0;i<n;i++){
        if(s[i]=='1'){
          int neigh=0;
          if(i-1>=0 && s[i-1]=='0') neigh++;
          if(i+1<n && s[i+1]=='0') neigh++;
          if(neigh<=1) x=true;
        }
      }
      if(x) cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
      }
    }
    return 0;
}
//https://codeforces.com/problemset/problem/2030/C
