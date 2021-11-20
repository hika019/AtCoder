#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <cassert>
#include <numeric>
#include <string>
#include <map>
#include <set>
using namespace std;

int main(){
  int n, x, i, tmp, index, fuga = 0, size;
  std::cin >> n >> x;
  int hoge[n];
  set<int> know;

  for(i=0; i<n; i++) std::cin >> hoge[i];

  know.insert(x);
  //cout << endl; 
  while(fuga < n){
    size = know.size();
 

    tmp = hoge[x-1];
    //cout << "next: " << hoge[x-1] << endl;
    x = tmp;
    know.insert(tmp);
    //cout << know.size() << endl;

    if(fuga == size) break;

    fuga ++;
    //cout << "########" << endl;
  }
  
  
  std::cout << know.size() << '\n';


  return 0;
}
