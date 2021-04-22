# -*- coding: utf-8 -*-
import numpy as np

n = int(input())

a_list_str = input().split()
a_list = [int(i) for i in a_list_str]

nparray = np.array(a_list)


flag = True
count = 0
while flag:
    if (nparray%2 == 0).all():
        nparray = nparray >> 1
        
        count += 1
    else:
        flag = False
    
print(count)