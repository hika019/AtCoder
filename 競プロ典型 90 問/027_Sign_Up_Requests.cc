#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <cassert>
#include <numeric>
#include <string>
#include <map>
using namespace std;

int main(){
  int n, i, j=0;
  std::cin >> n;
  string s[n];
  map<string, int> data;
  for(i=0; i<n; ++i) std::cin >> s[i];

  for(i=0; i<n; i++){
    if(data[s[i]] == 0) std::cout << i+1 << '\n';
    data[s[i]]=1;

  }



  return 0;
}
