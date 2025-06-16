#include<bits/stdc++.h>
using namespace std;

#define int long long
/* 
This C++ code solves a problem from Codeforces (link provided). It iterates through a series of test cases.
In each test case, it reads an integer `n` and a value `k`. It then reads `n` integers into a vector `a`, sorts the vector in ascending order, and calculates an `answer`. 
The core logic involves iterating through the sorted vector `a`. In each iteration, it subtracts a running `subtract` value from the current element `a[i]`, updates `k` by subtracting the minimum of `k` and the product of the remaining elements (`n - i`) and the current element `a[i]`. 
If `k` becomes zero, the loop breaks. Otherwise, the `answer` is incremented, and `subtract` is updated by adding the current element `a[i]`. Finally, the calculated `answer` is printed.
The code uses `long long` for integer types to handle potentially large values and standard input/output streams for efficiency.
*/
signed main()
{
    
    int tt; cin >> tt;

    while(tt--) {   
        int n, k, subtract = 0; cin >> n >> k;
        int answer = k;

        vector<int>a(n);
        for(auto &i : a) cin >> i;
        sort(a.begin(), a.end());

        for(int i = 0; i < n; i++) {
            a[i] -= subtract; 
            k -= min(k, (n - i) * a[i]); 

            if(k == 0) break; 
            else answer++; 

            subtract += a[i];
        }

        cout << answer << "\n";
    }
}
