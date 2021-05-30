# -*- coding: utf-8 -*-
n, k = map(int, input().split())

ori_array = []

for i in range(n):
    tmp = list(map(int, input().split()))
    ori_array.append(tmp)

ori_array.sort()

array = ori_array
now = 0
for i in range(n):
    tmp = k-array[0][0]
    
    if tmp >= 0:
        k+= array[0][1]
        
        array = array[1:]
        
    else:
        
        break
print(k)
