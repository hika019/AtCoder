#include <stdio.h>

int main(){
  int v, t, s, d, kyori;

  scanf("%d%d%d%d", &v, &t, &s, &d);

  kyori = v * s;

  if(v*t <= d && d <= v*s){
    printf("No");
  }else{
    printf("Yes");
  }


  return 0;
}
