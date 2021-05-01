#include <stdio.h>
#include <string.h>

int main(){
  int i, j;
  char s[5*10*10*10*10*10], ans[5*10*10*10*10*10], tmp[5*10*10*10*10*10];

  scanf("%s", &s);

  ans = "";

  for(i=0; i< strlen(s); ++i){
      if(strlen(ans)> 0 && ans[strlen(ans)-1] == s[i]){
        tmp = "";
        for(j=0; j<strlen(ans)-1; ++j){
          strcat(tmp, ans[j]);
        }
        ans = tmp;
      }
      else if(s[i] != "R"){
        strcat(ans, s[i]);
      }else{
        tmp = "";
        for(j=strlen(ans)-1; j>=0; j--){
          strcat(tmp, ans[j]);
        }
        ans = tmp;
      }
  }

  printf("%s\n", ans);
  return 0;
}
