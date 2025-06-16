#include <bits/stdc++.h>
using namespace std;
/*The logic for generating the sequence is as follows:

1.  **Special Case (n=k and k=1):** If both `n` and `k` are 1, the code prints 1 twice on separate lines.
2.  **Impossible Cases (n=k or k=1, but not both 1):** If `n` equals `k` or `k` is 1 (excluding the case where both are 1), the code prints -1, indicating that a valid sequence cannot be generated.
3.  **General Case:** For all other combinations of `n` and `k`, the code prints 3 (the length of the sequence) and then prints a sequence of three numbers. The sequence depends on the parity of `k-1`:
    *   If `k-1` is even, the sequence is 1, `k-1`, `k+2`.
    *   If `k-1` is odd, the sequence is 1, `k`, `k+1`.*/
int main() {
    int t;
    cin>>t;
    while(t--){
      int n,k;
      cin>>n>>k;
      if(n==k && k==1) cout<<1<<endl<<1<<endl;
      else if(n==k || k==1){
        cout<<-1<<endl;
      }
      else{
        cout<<3<<endl;
        if((k-1)%2==0){
          cout<<1<<" "<<k-1<<" "<<k+2<<endl;
        }
        else{
          cout<<1<<" "<<k<<" "<<k+1<<endl;
        }
      }
    }
    return 0;
}
