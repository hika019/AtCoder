# -*- coding: utf-8 -*-
a = int(input())+1
b = int(input())+1
c = int(input())+1
x = int(input())

count = 0

for ai in range(a):
    for bi in range(b):
        if x < 500*ai+ 100*bi:
            break
        for ci in range(c):
            if 500*ai + 100*bi + 50*ci == x:
                count += 1
            
print(count)