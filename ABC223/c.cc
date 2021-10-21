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
  int n, i;
  std::cin >> n;

  double a[n], b[n], all_time, half_time, kyori = 0.0;
  for(i=0; i<n; i++) {
    std::cin >> a[i] >> b[i];
    all_time += a[i]/b[i];
  }

  half_time = all_time/2;
  //std::cout << all_time << '\n';

  for(i=0; i<n; i++){
    //std::cout << a[i]/b[i] << '\n';
    if(a[i]/b[i] <half_time){
      half_time -= a[i]/b[i];
      kyori += a[i];
      //std::cout << half_time << '\n';
    }else{
      break;
    }
  }


  kyori += b[i]*half_time;

  std::cout << kyori << '\n';

  return 0;
}
