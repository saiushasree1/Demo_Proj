#include <bits/stdc++.h>
using namespace std;
/*This C++ code solves a problem where, for each test case, it reads an integer `n` and then an array `a` of `n` integers. 
The goal is to find the maximum number of elements in a suffix of the array that are less than or equal to the first element of that suffix. 
The code iterates through all possible starting positions `i` of a suffix. For each suffix starting at index `i`, 
it counts how many elements `a[j]` (where `j` is from `i` to `n-1`) are less than or equal to `a[i]`. 
It keeps track of the maximum count `b` found across all suffixes. Finally, it prints `n - b`. 
This essentially calculates the minimum number of elements that need to be removed from the beginning of the array to make the remaining prefix satisfy some condition, 
likely related to sorting or monotonicity, based on the problem statement on Codeforces. The problem link provided confirms this is problem 2027B from Codeforces, 
which asks for the minimum number of elements to remove from the beginning of an array so that the remaining elements are sorted in non-decreasing order. The code's logic seems to find the length of the longest non-decreasing suffix, 
and subtracting this length from the total length gives the minimum number of elements to remove.*/
int main() {
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      int a[n];
      for(int i=0;i<n;i++){
        cin>>a[i];
      }
      int b=0;
      for(int i=0;i<n;i++){
        int c=0;
        for(int j=i;j<n;j++){
          if(a[j]<=a[i]) c++;
        }
        b=max(b,c);
      }
      cout<<n-b<<endl;
    }
    return 0;
}
