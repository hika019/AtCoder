#include <iostream>
#include <algorithm>


int main(){
  int N, Q, i;
  std::cin >> N;
  int A[N];
  for(i=0; i<N; i++)std::cin >> A[i];
  std::cin >> Q;
  int B[Q];
  for(i=0; i<Q; i++) std::cin >> B[i];


  std::sort(A, A+N);

  for(i=0; i<Q; i++){
    int index = std::lower_bound(A, A+N, B[i]) - A;
    int hoge = 2147483647;
    int fuga = 2147483647;

    if(index <N) hoge = std::abs(B[i]-A[index]);
    if(index >0) fuga = std::abs(B[i]-A[index-1]);
    std::cout << std::min(hoge, fuga) << '\n';

  }


  return 0;
}
