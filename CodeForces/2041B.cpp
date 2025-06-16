#include <bits/stdc++.h>
using namespace std;
/*The code works as follows:

1.  **Reads Input:** It starts by reading the number of test cases 't'. Then, for each test case, it reads two long long integers, 'w' and 'b'.
2.  **Initializes 'k':** It calculates an initial estimate for 'k' using the square root of 2 times the sum of 'w' and 'b'. This is likely based on an observation or formula related to the problem's constraints.
3.  **Iteratively Decreases 'k':** It then enters a `while` loop that iteratively decreases the value of 'k'. The loop continues as long as two conditions are NOT met:
    *   `k * (k + 1) <= 2 * (w + b)`: This condition relates 'k' to the sum of 'w' and 'b'.
    *   `max(w, b) >= k`: This condition ensures that 'k' is not greater than the maximum of 'w' and 'b'.
    The loop also terminates if 'k' becomes 0.
4.  **Prints 'k':** Once the loop finishes (meaning 'k' satisfies the conditions), the code prints the final value of 'k'.
*/
int main() {
    int t;
    cin>>t;
    while(t--){
      long long w,b;
      cin>>w>>b;
      long long k=sqrtl(2*(w+b));
      while((!(k*(k+1)<=2*(w+b) && max(w,b)>=k))&&k!=0){
        k--;
      }
      cout<<k<<endl;
    }
    return 0;
}
//https://codeforces.com/problemset/problem/2041/B
