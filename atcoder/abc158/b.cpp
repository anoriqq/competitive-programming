#include<bits/stdc++.h>
using namespace std;
int main(){
  long long int n, a, b;
  cin >> n >> a >> b;
  cout << n / (a + b) * a + min(n % (a + b), a) << endl;
}