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
  long int n, m, i, tmp = 10^9;
  std::cin >> n >> m;

  long int a[n] = {0}, b[m]={};
  /*
  std::vector<int> a(n);
  std::vector<int> b(m);
  */

  for (i = 0; i < n; i++) std::cin >> a[i];
  for (i = 0; i < m; i++) std::cin >> b[i];


  sort(a, a+n);
  sort(b, b+m);


  for(i=0; i<n; i++){

    int index = std::lower_bound(b, b+m, a[i])-b;
    if(index == m) index--;
    if(index != 0){
      tmp = min(min(abs(a[i]-b[index]), tmp), abs(a[i]-b[index-1]));
    }else{
      tmp = min(abs(a[i]-b[index]), tmp);
    }
    //std::cout << index << '\n';
    //std::cout << b[index] << '\n';

  }
  std::cout << tmp << '\n';

  return 0;
}
