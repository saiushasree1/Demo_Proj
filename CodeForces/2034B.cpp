// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

/*The code uses a greedy approach to count the occurrences.
- The skipping of characters after a successful match (`i = i + k - 1`) is a crucial part of the logic.
- The problem context is available at the provided Codeforces URL: `https://codeforces.com/problemset/problem/2034/B`. This likely describes the exact rules and constraints of the problem.*/
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        string s;
        cin>>s;
        int ans=0,cnt=0;
        for(int i=0;i<n;i++){
          if(s[i]=='1')cnt=0;
          else{
            cnt++;
            if(cnt==m){
              ans++;
              cnt=0;
              i=i+k-1;
            }
          }
        }
        cout<<ans<<endl;
    }
    return 0;
}
