#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool hantei(string S) {
	int dep = 0;
	for (int i = 0; i < S.size(); i++) {
		if (S[i] == '(') dep += 1;
		if (S[i] == ')') dep -= 1;
		if (dep < 0) return false;
	}
	if (dep == 0) return true;
	return false;
}

string int_to_bin(int a, int n){
  string hoge ="";
  while(a!=0){
    if(a%2 == 0)hoge = "("+hoge;
    else hoge = ")"+hoge;
    a /=2;
  }
  while(hoge.length() != n)hoge ="("+hoge;

  //std::cout << hoge << '\n';

  if(hantei(hoge)) std::cout << hoge << '\n';
  return hoge;
}

int main(){
  int N;
  string tmp;
  cin >> N;
  for(int i=0; i<(1 << N); i++){
    //std::cout << i<< '\n';
    tmp = int_to_bin(i, N);
    //std::cout << tmp << '\n';
    //cheack(tmp);
  }

  return 0;
}
