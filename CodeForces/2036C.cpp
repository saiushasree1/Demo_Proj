// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

/*The core logic involves:
1. Initializing a counter `cnt` for "1100" occurrences.
2. Iterating through the string to find and count initial "1100" substrings.
3. Processing queries:
   - Reading the index `i` and value `v` for the update.
   - Decrementing `cnt` for any "1100" substrings that *might* be affected by the character change (checking a small window around the updated index).
   - Updating the character in the string `s[i]` with the new value.
   - Incrementing `cnt` for any new "1100" substrings formed after the update (checking the same small window).
   - Printing "YES" if `cnt > 0`, "NO" otherwise.*/
int main() {
    int t;
    cin>>t;
    while(t--){
      string s;
    cin >> s;
    int n = s.size();
    int q;
    cin >> q;
 
    int cnt = 0;
    for (int i = 0; i < n - 3; i++) {
        if (s.substr(i, 4) == "1100")
            cnt++;
    } // n
    while (q--) {
        int i, v;
        cin >> i >> v;
        i--;
        for (int j = i - 3; j < i + 1; j++) {
            if (j < 0 || j + 3 >= n)
                continue;
            if (s.substr(j, 4) == "1100")
                cnt--;
        } // 4
        s[i] = '0' + v;
        for (int j = i - 3; j < i + 1; j++) {
            if (j < 0 || j + 3 >= n)
                continue;
            if (s.substr(j, 4) == "1100")
                cnt++;
        } // 4
        if (cnt > 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }        
    }
    return 0;
}
