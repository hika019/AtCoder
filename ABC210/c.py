# -*- coding: utf-8 -*-
import numpy as np

n, k = map(int, input().split())
 
c = list(map(int, input().split()))

ans = 0
hoge = []


for i in range(n-k+1):
    tmp = (c[i:k+i])
    tmp = set(tmp)
    ans = max(ans,len(tmp))

print(ans)