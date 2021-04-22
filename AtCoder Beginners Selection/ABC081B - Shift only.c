#include <stdio.h>

int main(){
  int n, a[201], i, flag, count;
  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }

  flag = 0;
  count = 0;

  while (0 == 0) {
    for(i=0; i<n; i++){
      // printf(" %d", a[i]);
      if(a[i]%2 != 0){
        // printf("call");
        flag = 1;
        break;
      }
    }
    if(flag == 1) break;

    for(i=0; i<n; i++){
      a[i] = a[i]/2;
    }

    count ++;
  }
  printf("%d", count);


  return 0;
}
