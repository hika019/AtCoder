# -*- coding: utf-8 -*-
import  math
 
N, K = map(int, input().split())
array = list(map(int, input().split()))
 
 
ans = 0
 
if N<=K:
    ans = math.floor(K/N)
    K = K%N
    
array_sort = sorted(array)
 
 
sort_index = 0
 
for i in range(N):
    if sort_index < K and array[i] <= array_sort[K-1]:
        print(ans +1)
        sort_index+=1
    else:
        print(ans)