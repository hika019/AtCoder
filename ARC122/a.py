# -*- coding: utf-8 -*-
import numpy as np

m = 10**9+7

n = int(input())

sum =0;


hoge = list(map(int, input().split()))


for i in range(n):
    sum += hoge[i]

hiku = (sum-hoge[0])

ans = sum
ans += ans*(n-1)-hiku*2

size = n/2
i=2

while size>1:
    tmp = 0
    count = 0
    left = n-1-i
    right = n-1
    
    while left != 0:
        tmp += hoge[left]+ hoge[right]
        left-=1
        right-=1
        count+=1
    
    ans += (sum*count-(tmp*2))%m
    size = int(size/2)
    i+=1

print(ans%m)
        