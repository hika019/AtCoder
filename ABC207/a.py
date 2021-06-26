# -*- coding: utf-8 -*-

a, b, c = map(int, input().split())

tmp = max(a+b, a+c, b+c)
print(tmp)
