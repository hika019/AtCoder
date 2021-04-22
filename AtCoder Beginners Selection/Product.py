# -*- coding: utf-8 -*-
"""
Created on Mon Mar 22 16:42:07 2021

@author: hikar
"""

a, b = map(int, input().split())

if a*b %2 ==0:
    flag = "Even"
else:
    flag = "Odd"

print(flag)