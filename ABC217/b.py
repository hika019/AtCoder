# -*- coding: utf-8 -*-
a = input()
b = input()
c = input()

hoge = ["ABC", "ARC", "AGC", "AHC"]
hoge.remove(a)
hoge.remove(b)
hoge.remove(c)

print(*hoge)
