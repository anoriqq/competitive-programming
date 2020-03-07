#include<bits/stdc++.h>
using namespace std;
int main(){
  int a, b;
  cin >> a >> b;
  for (int i = 0; i < 100 / 0.08; i++){
    if (floor(i * 0.08) == a && floor(i * 0.1) == b){
      return cout << i << endl, 0;
    }
  }
  cout << "-1" << endl;
}