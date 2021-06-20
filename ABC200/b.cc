#include <iostream>

int main(){
  unsigned long long int n, k, i;

  std::cin >> n >> k;

  for(i=0; i<k; ++i){
    if(n%200 == 0){
      n = n/200;
    }else{
      n = n*1000 +200;
    }
  }
  std::cout << n << '\n';

  return 0;
}
