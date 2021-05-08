# -*- coding: utf-8 -*-
import numpy as np
n = int(input())

tmp = list(map(int, input().split()))
ans = 0


for i in range(int((n-1)/2)):
    for j in range(i+1, n):
        if (tmp[i]-tmp[j])%200 == 0:
            if j<=int((n-1)/2):
                ans-=1
            print(i, j)
            ans +=2
print(ans)