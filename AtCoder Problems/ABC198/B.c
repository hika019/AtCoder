#include <stdio.h>
int main(){
  char a[10], b[10];
  int i;

  scanf("%s", &a);

  for(i=9; i!=0; --i){
    b[i] = a[9-i];
  }



  for(i=0; i<10; ++i){
    printf("%c", a[i]);
  }


    for(i=0; i<10; ++i){
      printf("%c", b[i]);
    }

  return 0;
}
