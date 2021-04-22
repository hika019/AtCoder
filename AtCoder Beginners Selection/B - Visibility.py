# -*- coding: utf-8 -*-

import numpy as np

H, W, X, Y = (int(x) for x in input().split())

matrix = np.zeros((H, W))

for i in range(H):
    data = input()
    for j in range(W):
        if data[j] == "#":
            matrix[i][j] = 1
        else:
            matrix[i][j] = 0
            
X -=1
Y -=1

    
count = 0

for i in range(X, -1, -1):
    #print("{}, {}, {}".format(i, Y, matrix[i, Y]))
    if matrix[i, Y] == 1:
        break
    count += 1
    
for i in range(X, H):
    #print("{}, {}, {}".format(i, Y, matrix[i, Y]))
    if matrix[i, Y] == 1:
        break
    count += 1

for i in range(Y, -1, -1):
    #print("{}, {}, {}".format(i, Y, matrix[i, Y]))
    if matrix[X, i] == 1:
        break
    count += 1

for i in range(Y, W):
    #print("{}, {}, {}".format(i, Y, matrix[i, Y]))
    if matrix[X, i] == 1:
        break
    count += 1
        


print(count-3)