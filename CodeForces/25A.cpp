#include <bits/stdc++.h>
using namespace std;

//the code reads a sequence of numbers, counts the odd and even numbers, and then prints the 1-based index of the number that has a different parity (either the single odd number or the single even number).
void solve(){
  int odi=-1,evi=-1;
  int odc=0,evc=0;
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
    if(a[i]%2){
      odc++;
      odi=i+1;
    }
    else{
      evc++;
      evi=i+1;
    }
  }
  if(odc==1){
    cout<<odi<<endl;
  }
  else cout<<evi<<endl;
}
int main() 
{
      solve();
    
    return 0;
}
