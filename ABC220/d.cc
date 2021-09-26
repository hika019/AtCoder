#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <cassert>
#include <numeric>
#include <string>
#include <map>
using namespace std;

int tmp_fun(long int A[], long int a, long int b, long int num, long int size);

int ans[10] ={0};

int tmp_fun(long int A[], long int a, long int b, long int num, long int size){
  int hoge, fuga;
  hoge = (a+b)%10;
  fuga = (a*b)%10;
  if(num == size){
    ans[hoge] += 1;
    ans[fuga] += 1;
    return 0;
  }else{
    return tmp_fun(A, A[hoge], A[fuga], 2+1, size);
  }

}

int main(){
  long int n, i;
  std::cin >> n;
  long int A[n];
  for(i=0; i<n; i++){
    std::cin >> A[i];
  }

  tmp_fun(A, A[0], A[1], 2, n);
  for(i=0; i<10; i++){
    std::cout << ans[i] << '\n';
  }

  return 0;
}
