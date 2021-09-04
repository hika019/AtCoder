# -*- coding: utf-8 -*-
s, t = map(str, input().split())

hoge = [s, t]
hoge = sorted(hoge)
if hoge[0] == s:
    print("Yes")
else:
    print("No")