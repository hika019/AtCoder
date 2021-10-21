#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <cassert>
#include <numeric>
#include <string>
#include <map>
using namespace std;

long double gold_to_silver(long double x, int a){
  return x*a;
}

long double silver_to_gold(long double x, int a){
  return x/a;
}

int main(){
  long double max = 0;
  int n;
  std::cin >> n;
  int a[n], max_array[n] = {};
  for(int i=0; i<n; i++) std::cin >> a[i];

  for (int bit = 0; bit < (1<<n); ++bit) {
    long double x=1;
    int flag = 0;

    vector<int> S;
    for (int i = 0; i < n; ++i) {
        if (bit & (1<<i)) { // 列挙に i が含まれるか
            S.push_back(i);
        }
    }

    //cout << bit << ": {";
    for (int i = 0; i < (int)S.size(); ++i) {

        if(flag == 0){
          x = gold_to_silver(x, a[S[i]]);
        }else{
          x = silver_to_gold(x, a[S[i]]);
        }
        flag = (flag+1)%2;
        //std::cout << x << ' ';
    }
    //std::cout  << '\n';
    //std::cout  << '\n';

    if(flag == 0){
      if(max < x){
        /*
        std::cout << "x=" << x << '\n';
        for (int j = 0; j < (int)S.size(); ++j) {
          std::cout << S[j] << ' ';
        }
        std::cout <<'\n';
        */

        max_array[n] = {};
        /*
        std::cout << "flag" << '\n';
        std::cout << flag << '\n';
        std::cout << " bit " << '\n';
        */
        for (int j = 0; j < (int)S.size(); ++j) {
          max_array[S[j]-1] = 1;
          //std::cout << S[j] << ' ';
        }
        max = x;
        //std::cout <<'\n';
      }
    }
  }

  for(int i=n-1; i>=0; i--){
    std::cout << max_array[i] << ' ';
  }


  return 0;
}
