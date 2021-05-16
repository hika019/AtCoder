# -*- coding: utf-8 -*-

n = int(input())
s = []
t = []

for i in range(n):
    a, b = input().split()
    s.append(a)
    t.append(int(b))

hight = max(t)

hoge = -1
for i in range(n):
    if t[i] > hoge and hight >t[i]:
        hoge = t[i]


index = t.index(hoge)
print(s[index])