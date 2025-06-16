#include <bits/stdc++.h>
using namespace std;

/*the program determines if array `b` can be obtained from array `a` by either 
keeping the elements in the same order or by reversing the order. If so, "Bob" wins; otherwise, "Alice" wins.
The code utilizes standard input/output and basic array manipulation. It efficiently checks both conditions in a single loop.*/
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n],b[n];
        bool rev=true;
        bool cor=true;
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++){
          cin>>b[i];
          if(a[i]!=b[i]) cor=false;
          if(a[n-1-i]!=b[i]) rev=false;
        }
        if(cor||rev) cout<<"Bob"<<endl;
        else cout<<"Alice"<<endl;
        
    }
    return 0;
}
