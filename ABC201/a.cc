#include "iostream"

int main(){
  int a, b, c, flag, i, tmp;
  std::cin >> a >> b >> c;
  flag =0;

  if(a-b == b-c) flag =1;
  else if(a-c==c-b) flag = 1;
  else if(c-a == a-b) flag = 1;
  else if(c-b == b-c) flag = 1;
  else if(b-c == c-a) flag =1;
  else if(b-a == a-c) flag =1;

  if(flag == 1){
    std::cout << "Yes" << '\n';
  }else{
    std::cout << "No" << '\n';
  }


  return 0;
}
