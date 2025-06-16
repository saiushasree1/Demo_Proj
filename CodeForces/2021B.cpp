#include <bits/stdc++.h>
using namespace std;
/*This C++ code solves a problem from Codeforces (link provided). It iterates through a series of test cases. 
In each test case, it reads an integer `n` and a value `k`. It then reads `n` integers into a vector `a`, sorts the vector in ascending order, and calculates an `answer`. 
The core logic involves iterating through the sorted vector `a`. In each iteration, it subtracts a running `subtract` value from the current element `a[i]`, updates `k` by subtracting the minimum of `k` and the product of the remaining elements (`n - i`) and the current element `a[i]`. If `k` becomes zero, the loop breaks. Otherwise, the `answer` is incremented, and `subtract` is updated by adding the current element `a[i]`. Finally, the calculated `answer` is printed. The code uses `long long` for integer types to handle potentially large values and standard input/output streams for efficiency.*/
void solve(){
  int n,x;
     cin>>n>>x;
     int a[n];
     int maxi=0;
     unordered_map<int,int> m;
     for(int i=0;i<n;i++){
       cin>>a[i];
       m[a[i]]++;
       maxi=max(maxi,a[i]);
     }
     
     for(int i=0;i<=n;i++){
       if(m[i]==0 && i<x){
         cout<<i<<endl;
         return;
       }
       else if(m[i]==0){
         cout<<i<<endl;
         return;
       }
       else{
         int xi=x;
         while(m[i]>=2){
           m[i]--;
           m[i+xi]++;
           xi+=x;
         }
       }
     }
     cout<<maxi+1<<endl;
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
