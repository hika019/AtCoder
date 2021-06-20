#include <iostream>

int main(){
  long long int n, array[2*100000], i, j;
  int ans = 0;
  std::cin >> n;

  for(i=0; i<n; i++){
    std::cin >> array[i];
  }

  for(i=0; i<(int)n/2; i++){
    for(j=0; j<n; ++j){
      if((array[i]-array[j])%200 == 0){
        ans +=2;
        if(j<=(int)((n-1)/2)){
          ans -=1;
        }

      }
    }
  }
std::cout << ans << '\n';
  return 0;
}
