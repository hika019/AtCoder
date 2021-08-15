# -*- coding: utf-8 -*-
n = int(input())
a=[]

for i in range(n-1):
    tmp = list(map(int, input().split()))
    if tmp[0]>tmp[1]:
        hoge = tmp[0]
        tmp[0] = tmp[1]
        tmp[1] = hoge
        
    a.append(tmp)

a.sort()

hoge = [0]*(n)

for i in range(n-1):
    tmp = a[i]
    hoge[tmp[0]] = tmp[2]+hoge[i]