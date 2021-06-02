#include <iostream>

int main() {
  int n, i, q;

  std::cin >> n;
  int c[n], p[n], ans1[n+1]={0}, ans2[n+1]={0};
  for(i=0; i<n; i++) std::cin >> c[i] >> p[i];

  std::cin >> q;
  int l[n], r[n];
  for(i=0; i<q; i++) std::cin >> l[i] >> r[i];


  for(i=0; i<n; i++){

    ans1[i+1] = ans1[i];
    ans2[i+1] = ans2[i];
    if(c[i] == 1) ans1[i+1] += p[i];
    if(c[i] == 2) ans2[i+1] += p[i];
  }
  /*
  for(i=0; i<n+1; i++) std::cout << ans1[i] << ' ';
  std::cout << '\n';
  for(i=0; i<n+1; i++) std::cout << ans2[i] << ' ';
  std::cout << '\n';
  */
  for (i = 0; i < q; i++) {
    std::cout << ans1[r[i]] - ans1[l[i]-1] << " "<< ans2[r[i]] - ans2[l[i]-1] << '\n';
  }

  return 0;
}
