# -*- coding: utf-8 -*-
import numpy as np

n, m = map(int,input().split())

maps = np.zeros((m,n))
ikikata = np.zeros(m)

for i in range(m):
    a, b = map(int, input().split())
    maps[i, a-1] = 1
    maps[i, b-1] = 2
    
tmp_maps = np.zeros((n,n))
for i in range(m):
    tmp_maps[i] = maps[i]
    for j in range(i, m):
        if tmp_maps[i].where(2) == maps[j].any(1):
            tmp_maps[i, (maps[j].any(2))] = 2

    