# -*- coding: utf-8 -*-
n = int(input())

s = []
for i in range(n):
    s.append(input())

d = {}
for i in range(n):
    if not(s[i] in d):
        d[s[i]] = 0
        print(i+1)

