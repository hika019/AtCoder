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
  int a, b, c,s, t, count = 0;

  std::cin >> s >> t;

  for(a=0; a<=100; a++){
    for(b=0; b<=100; b++){
      for(c=0; c<=100; c++){
        if (a+b+c <= s && a*b*c <= t){
          count++;
        }
      }
    }
  }
  std::cout << count << '\n';
  return 0;
}
