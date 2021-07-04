# -*- coding: utf-8 -*-
import math

p_ori = int(input())

ans = 0


p = p_ori
i=10


while True:
    p -= math.factorial(i)
    ans += 1
    if p == 0:
        break
    
    if p < 0:
        p += math.factorial(i)
        i -=1
        ans -=1
        
print(ans)
