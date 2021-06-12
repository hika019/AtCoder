#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

long int a[100005];
long long int m = pow(10, 9)+7;


int main(){
  long long int n, sum=0, ans=0, size, hiku, tmp, i, count;
  std::cin >> n;
  for(i =0; i<n; ++i){
    std::cin >> a[i];
    sum = (sum+a[i])%m;
  }


hiku = (sum - a[0])%m;
sum = sum%m;
ans = sum;

ans += (ans *(n-1)-hiku*2)%m;



size = n/2;
i = 2;
while(size >1){
  tmp =0;
  count = 0;
  int lef= n-1-i, rig=n-1;

  while(lef != 0){
    tmp += a[lef]+a[rig];
    lef--;
    rig--;
    count ++;
  }
  std::cout << size << '\n';

  ans = ((ans- tmp*2)%m + (sum*count)%m)%m;

  size = size/2;

  //std::cout << "ans: " << ans << '\n';
}


std::cout << ans << '\n';


  return 0;
}
