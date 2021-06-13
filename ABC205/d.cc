#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;


int main(){
  long int n, q, flag =0;
  std::cin >> n >> q;

  unsigned long long int a[n];
  unsigned long long int k[q], kmax=0, sork[q];
  unsigned long long int i, num, j;

  for(i=0; i<n; ++i) std::cin >> a[i];
  for(i=0; i<q; ++i) {
    std::cin >> k[i];
    if(kmax < k[i]) kmax = k[i];
  }
  //std::cout << "/* message */" << '\n';
  std::cout << kmax << '\n';
  i = 0;//a
  j = 0;//k
  num=1;
  sort(a, a+n);
  sort(sork, sork+q);
  unsigned long long int hoge[kmax+1]={};

  for(i=0; i<q; ++i)std::cout << sork[i] <<" ";

  while(j<q){
    if(num != a[i]){
      hoge[sork[j]]= num;
      std::cout << "/* message */" << '\n';
      num++;
      j++;
    }else num++;
  }

  for(i=0; i<q; ++i) std::cout << hoge[k[i]] << '\n';



}
