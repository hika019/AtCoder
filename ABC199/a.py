# -*- coding: utf-8 -*-
"""
Created on Sat Apr 24 21:16:37 2021

@author: hikar
"""

a, b, c = (int(x) for x in input().split())

if a*a + b*b < c*c:
    print("Yes")
else:
    print("No")