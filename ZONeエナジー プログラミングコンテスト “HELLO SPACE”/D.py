# -*- coding: utf-8 -*-
import re
s = input()
 
ans = ""
flag = 0
 
for i in range(len(s)):
    if s[i] == "R":
        flag = (flag+1)%2
    
    elif len(ans)>0 and ((ans[-1] == s[i] and flag == 0) or (ans[0] == s[i] and flag == 1)):
       if flag == 0:
           ans = ans[:-1]
       else:
            ans = ans[1:]
    else:
        if flag == 0:
            ans += s[i]
        else:
            tmp = s[i]+ans
            ans = tmp
 
if flag == 1:
    ans = ans[::-1]
 
print(ans)