#include <iostream>

int main(){
 int h, w, i, j, tmp, l;
  std::cin >> h >> w;
  int a[h][w], yoko[h]={}, tate[w]={};
  for(i=0; i<h; i++){
    for(j=0; j<w; j++){
      std::cin >> a[i][j];
      tate[j] += a[i][j];
      yoko[i] += a[i][j];
    }
  }

  for(i=0; i<h; i++){
    for(j=0; j<w; j++){
      std::cout << tate[j]+yoko[i]-a[i][j] << ' ';
    }
    std::cout << '\n';
  }

  return 0;
}
