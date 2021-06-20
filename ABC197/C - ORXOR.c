
#include <stdio.h>
int main(){
  int n, i, flag, j, ans, array[21], or_array[11];


  flag = 0;
  scanf("%d", &n);


  for(i=0; i<n; ++i){
    scanf("%d", &array[i]);
  }

  if(n %2 != 0){
    flag = 1;
    n -=1;
  }
  printf("array");

  for (i = 0; i<n+flag; i++) {
    printf("%d,", array[i]);
  }


  for(i =0; i< n; i+=2){
    or_array[i] = array[i] | array[i+1];
    printf("%d, ", or_array[i]);
  }
  if(flag == 1) or_array[i+1] = array[i+1];

  for (j = 0; j<n/2+flag; ++j) {
    printf("%d,", or_array[j]);
  }


  //or サイズ
  if(flag == 1) n +1;
  n = n/2;

  ans = or_array[0];
  for(i=1; i<n+flag -1; i++){
    ans  ^ or_array[i];
    printf("%d, ", or_array[i]);
  }

  printf("aaa%d", ans);



  return 0;
}
