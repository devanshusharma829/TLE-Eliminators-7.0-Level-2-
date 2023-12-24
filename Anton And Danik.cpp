#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin>>n;
  string s;
  cin>>s;
  map<char,int>f;
  for(int i=0;i<n;i++){
    f[s[i]]++;
  }
  if(f['A']>f['D']){
    cout<<"Anton"<<"\n";
  }
  else if(f['D']>f['A']){
    cout<<"Danik"<<"\n";
  }
  else{
    cout<<"Friendship"<<"\n";
  }
  return 0;
}