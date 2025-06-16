#include <bits/stdc++.h>
using namespace std;

/*The core logic is within the `while` loop. It iterates through powers of `k` (represented by `mul`). 
In each iteration, it calculates the range of `x` values that satisfy `l2 <= x * mul <= r2`. 
This is equivalent to `(l2 + mul - 1) / mul <= x <= r2 / mul`.  
It then finds the overlap between this range and the original range `[l1, r1]` using `max(0LL, (min(r2/mul,r1)-max((l2+mul-1)/mul,l1))+1)`.
This overlap represents the number of integers `x` in the range `[l1, r1]` that, when multiplied by the current `mul`, fall within the range `[l2, r2]`. 
This count is added to the total `ans`. The loop continues as long as `mul` is less than or equal to 10^9 to avoid potential overflow and considering a reasonable range of powers of k. 
Finally, the calculated `ans` is printed for each test case. The use of `long long` is important to handle potentially large values of `k`, `l1`, `r1`, `l2`, and `r2`*/
int main() {
    int t;
    cin>>t;
    while(t--){
     long long k,l1,r1,l2,r2;
     cin>>k>>l1>>r1>>l2>>r2;
     long long ans=0;
     long long mul=1;
     while(mul<=1e9){
       
       ans+=max(0LL,(min(r2/mul,r1)-max((l2+mul-1)/mul,l1))+1);
       mul=mul*k;
     }
     cout<<ans<<endl;
    }
    return 0;
}
//https://codeforces.com/contest/2044/problem/E
