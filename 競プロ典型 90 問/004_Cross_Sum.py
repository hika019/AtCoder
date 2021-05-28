# -*- coding: utf-8 -*-
import numpy as np
h, w = map(int, input().split())

array = []
yoko = []
tate = np.zeros(w)


for i in range(h):
    tmp_array = list(map(int, input().split()))
    yoko.append(sum(tmp_array))
    tate += tmp_array
    array.append(tmp_array)
    

for i in range(h):
    for j in range(w):
        print(int(tate[j]+yoko[i]-array[i][j]), end=" ")
    print()