// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
/* In essence, the code pre-calculates powers of 2 up to the maximum input value to efficiently answer queries about 2 raised to the power of each input number modulo 10^9 + 7. 
The modulo operation is used to prevent integer overflow.*/
int main() {
    
    int mod=1e9+7;
    
      int t;
      cin>>t;
      int a[t];
      for(int i=0;i<t;i++){
        cin>>a[i];
      }
      int maxi=0;
      for(int i=0;i<t;i++){
        cin>>a[i];
        maxi=max(maxi,a[i]);
      }
      vector<int> d(maxi+1,1);
      for(int i=1;i<=maxi;i++){
        d[i]=(d[i-1]+d[i-1])%mod;
      }
      for(int i=0;i<t;i++){
        cout<<d[a[i]]<<endl;
      }
    
    return 0;
}
//https://codeforces.com/problemset/problem/2025/B
