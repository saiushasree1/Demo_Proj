// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
/*The core logic involves iterating through the strings and maintaining counts of '0's (`cz`) and '1's (`co`) in a sliding window-like manner. The code first calculates the initial counts of '0's and '1's in the string `s`. If either count is initially zero, it's impossible to perform any transformations, so it outputs "NO".

Otherwise, the code iterates from the first character up to the second-to-last character of the strings (`n-1`). In each step of the iteration, it simulates removing the current character from the "window" (decrementing `cz` or `co` based on `s[i]`) and adding the corresponding character from `r` to the window (incrementing `cz` or `co` based on `r[i]`). If at any point during this process either `cz` or `co` becomes zero, it signifies that a required type of character is no longer available for potential transformations, and the code sets a flag `f` to `false` and breaks the loop.*/
int main() {
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      string s,r;
      cin>>s>>r;
      int co=0,cz=0;
      for(int i=0;i<n;i++){
        if(s[i]=='1') co++;
        else cz++;
      }
      if(cz==0 || co==0) cout<<"NO"<<endl;
      else{
        bool f=true;
        for(int i=0;i<n-1;i++){
          if(cz==0||co==0){
            f=false;
            break;
          }
          cz--;
          co--;
          if(r[i]=='1') co++;
          else cz++;
        }
        if(f) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
      }
    }
    return 0;
}
//https://codeforces.com/problemset/problem/2029/B
