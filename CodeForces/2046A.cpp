#include <bits/stdc++.h>
using namespace std;
bool isgreatest(int a,int b,int c,int d){
  if(a<b || a<c || a<d) return false;
  return true;
}
//The code reads two arrays of size `n` for multiple test cases. For each test case, it calculates the sum of the maximum elements at each corresponding index of the two arrays. Additionally, it finds the maximum of the minimum elements at each corresponding index. The final output is the sum of the calculated total sum and the maximum of the minimums.
int main() {
    int t;
    cin>>t;
    while(t--){
     int n;
     cin>>n;
     int a[2][n];
     for(int i=0;i<n;i++){
       cin>>a[0][i];
     }
     int maxsum=INT_MIN;
     long long int totalsum=0;
     for(int i=0;i<n;i++){
       cin>>a[1][i];
       if(a[0][i]>a[1][i]){
         totalsum+=a[0][i];
         maxsum=max(maxsum,a[1][i]);
       }
       else{
         totalsum+=a[1][i];
         maxsum=max(maxsum,a[0][i]);
       }
     }
     cout<<totalsum+maxsum<<endl;
    }
    return 0;
}
//https://codeforces.com/problemset/problem/2046/A
