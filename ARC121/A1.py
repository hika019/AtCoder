# -*- coding: utf-8 -*-

def kyori(a, b):
    return max(abs(a[0]-b[0]), abs(a[1]-b[1]))


n = int(input())

matrix = []

for i in range(n):
    tmp= list(map(int, input().split()))
    matrix.append(tmp)



x_big = [0, 0]
y_big = [0, 0]

x_min = [0, 0]
y_min = [0, 0]

for i in range(n):
    tmp = matrix[i]
    if matrix[x_big[0]][0] < tmp[0]:
        x_big[1] = x_big[0]
        x_big[0] = i
    elif matrix[x_big[1]][0] < tmp[0]:
        x_big[1] = i
    
    if matrix[y_big[0]] [1]< tmp[1]:
        y_big[1] = y_big[0]
        y_big[0] = i
    elif matrix[y_big[1]][1] < tmp[1]:
        y_big[1] = i
    
    
    if matrix[x_min[0]][0] > tmp[0]:
        x_min[1] = x_min[0]
        x_min[0] = i
    elif matrix[x_min[1]][0] > tmp[0]:
        x_min[1] = i
    
    if matrix[y_min[0]] [1]> tmp[1]:
        y_min[1] = y_min[0]
        y_min[0] = i
    elif matrix[y_min[1]][1] > tmp[1]:
        y_min[1] = i
        
        
data = []

if x_big[0] != x_min[0]:
    data.append(kyori(matrix[x_big[0]], matrix[x_min[0]]))
if x_big[0] != x_min[1]:
    data.append(kyori(matrix[x_big[0]], matrix[x_min[1]]))
if x_big[1] != x_min[0]:
    data.append(kyori(matrix[x_big[1]], matrix[x_min[0]]))
if x_big[1] != x_min[0]:
    data.append(kyori(matrix[x_big[1]], matrix[x_min[1]]))

    

if y_big[0] != y_min[0]:
    data.append(kyori(matrix[y_big[0]], matrix[y_min[0]]))
if y_big[0] != y_min[1]:
    data.append(kyori(matrix[y_big[0]], matrix[y_min[1]]))
if y_big[1] != y_min[0]:
    data.append(kyori(matrix[y_big[1]], matrix[y_min[0]]))
if y_big[1] != y_min[0]:
    data.append(kyori(matrix[y_big[1]], matrix[y_min[1]]))


if y_big[0] != x_min[0]:
    data.append(kyori(matrix[y_big[0]], matrix[x_min[0]]))
if y_big[0] != x_min[1]:
    data.append(kyori(matrix[y_big[0]], matrix[x_min[1]]))
if y_big[1] != x_min[0]:
    data.append(kyori(matrix[y_big[1]], matrix[x_min[0]]))
if y_big[1] != x_min[0]:
    data.append(kyori(matrix[y_big[1]], matrix[x_min[1]]))

if x_big[0] != y_big[0]:
    data.append(kyori(matrix[x_big[0]], matrix[y_big[0]]))
if x_big[0] != y_big[1]:
    data.append(kyori(matrix[x_big[0]], matrix[y_big[1]]))
if x_big[1] != y_big[0]:
    data.append(kyori(matrix[x_big[1]], matrix[y_big[0]]))
if x_big[1] != y_big[0]:
    data.append(kyori(matrix[x_big[1]], matrix[y_big[1]]))
    


data.sort(reverse = True)
print(data[3])