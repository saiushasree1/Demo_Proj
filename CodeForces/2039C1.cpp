#include <bits/stdc++.h>
using namespace std;
/***Logic:**
   - A variable `ans` is initialized to 0 to store the count of valid `y` values.
   - The code iterates through integers `y` starting from 1 up to the minimum of `2*x` and `m`. This range is crucial and likely derived from the problem constraints or mathematical properties.
   - Inside the loop, it checks two conditions for each `y`:
     - `x != y`: Ensures that `x` and `y` are not equal.
     - `(x % (x ^ y) == 0 || y % (x ^ y) == 0)`: This is the core condition. It checks if either `x` is divisible by the bitwise XOR of `x` and `y`, or if `y` is divisible by the bitwise XOR of `x` and `y`.
   - If both conditions are true, the `ans` is incremented.*/
int main() {
    int t;
    cin>>t;
    while(t--){
      long long x;
      long long m;
      cin>>x>>m;
      long long ans=0;
      for(int y=1;y<=min(2*x,m);y++){
        if(x!=y && (x%(x^y)==0||y%(x^y)==0)) ans++;
      }
      cout<<ans<<endl;
    }
    return 0;
}
//https://codeforces.com/problemset/problem/2039/C1
