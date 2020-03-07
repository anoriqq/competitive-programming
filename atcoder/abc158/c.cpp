#include<bits/stdc++.h>
using namespace std;
int main(){
  int a, b;
  cin >> a >> b;
  int taxA = 0.08, taxB = 0.1;
  int _a = a / taxA, _b = a / taxB;
  if(_a<_b){
    if (floor(_a * taxB) == _b){
      
    }
    cout<<(floor(_a*taxB)==_b)
  }
}