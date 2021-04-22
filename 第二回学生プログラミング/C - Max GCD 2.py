# -*- coding: utf-8 -*-
import math
import numpy as np

a, b = (int(x) for x in input().split())

gcd = 1

a_list = list(range(a, b))
b_list = list(range(a+1, b+1))

for i in range(0, int((b/2))-1):
    if i<len(a_list) and a_list[i]<(b-1)/2 and a_list[i]*2 <= b-1:
        a_list.remove(a_list[i])
        b_list.remove(a_list[i])
    


for i in range(len(a_list)):
    tmp = max(np.gcd(a_list[i], b_list[i:]))
    if gcd < tmp:
        gcd = tmp
print(gcd)