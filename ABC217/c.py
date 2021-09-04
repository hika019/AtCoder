# -*- coding: utf-8 -*-
n = int(input())
p = list(map(int, input().split()))

hoge =[0]*n

for i in range(n):
    tmp = p[i]
    hoge[tmp-1] = i+1

print(*hoge)