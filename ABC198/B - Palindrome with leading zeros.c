#include <stdio.h>
int main(){
  int n, digit, digit_n, i;

  scanf("%d", &n);

  printf("n=%d\n", n);

  digit_n = n;
  while(digit_n != 0){
    digit_n = digit_n/10;
    digit ++;
  }

  if(digit%2 ==1) digit-=1;

  printf("%d\n", n-(n/10*10));





  return 0;
}
