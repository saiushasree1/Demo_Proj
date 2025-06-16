// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

//The `solve()` function processes the string `s`. It first counts the frequency of each character in the string using an `unordered_map`. It checks if any character appears at least twice or if the string has only one unique character.
void solve(){
  int n;
  cin>>n;
  string s;
  cin>>s;
  unordered_map<char,int> v;
  bool aod=false;
  for(auto i:s){
    v[i]++;
    if(v[i]>=2) aod=true;
  }
  if(!aod || v.size()==1) {cout<<s<<endl;return;}
  while(!v.empty()){
    vector<char> toErase; 
        for (auto& [c, count] : v) {
            cout << c;
            count--;
            if (count == 0) {
                toErase.push_back(c); 
            }
        }
        for (char c : toErase) {
            v.erase(c);
        }
  }
  cout<<endl;
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
