#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

vector<pair<int, int>> array(4000000);
long int hoge[2001] ={0};

int main(){
  long int n, m, ans;

  std::cin >> n >> m;


  for (int i = 0; i < m; i++){
    std::cin >> array[i].first >> array[i].second;
    int tmp = array[i].first;
    hoge[tmp]++;
  }

  sort(array.begin(), array.end());



  for(long int i = 0; i<n+1; i++){
    hoge[array[i].first] += hoge[array[i].second];
  }

  int sum=0;
  for(long int i =1; i<n+1; ++i) sum += hoge[i];

  std::cout << sum << '\n';







  return 0;
}
