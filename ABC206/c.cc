#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

long long int num[1000000] = {};

int main(){
  long long int n, i, tmp, sum=0, j;
  std::cin >> n;
  long long int a[n];


  for(i=0; i<n; i++)std::cin >> a[i];
  sort(a, a+n);

  j=0;
  tmp=1;
  for(i=1; i<n; i++){
    if(a[i] == a[i-1]){
      tmp++;
    }
    else{
      num[j] = tmp;
      j++;
      tmp=1;
    }
  }

  for(i=0; i<j+1; i++){
    sum += (n-num[i])*num[i];
    n-=num[i];
  }

  std::cout << sum << '\n';

  return 0;
}
