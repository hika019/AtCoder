# -*- coding: utf-8 -*-
hoge = []

for i in range(4):
    hoge.append(input())
    
hoge = set(hoge)
if len(hoge) == 4:
    print("Yes")
else:
    print("No")