#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string int_to_bin(int a, int n){
  string hoge ="";
  int ans = 0;
  if(a == 0){
    hoge += ")";
  }

  while(a!=0 && ans >=0){
    if(a%2 == 0){
      hoge += ")";
      ans +=1;
    }else{
       hoge += "(";
       ans -= 1;
    }
    a /=2;
  }
  while(hoge.length() != n){
    hoge +="(";
    ans =100;
  }

  if(ans == 0){
    std::reverse(hoge.begin(), hoge.end());
    std::cout << hoge << '\n';
  }
  return hoge;
}

int main(){
  int N;
  string tmp;
  cin >> N;
  for(int i=(1 << N)-1; i>=0; i--){
    tmp = int_to_bin(i, N);
    //cheack(tmp);
  }

  return 0;
}
