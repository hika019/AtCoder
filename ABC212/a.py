# -*- coding: utf-8 -*-
a, b = map(int, input().split())

if 0 < a and b == 0:
    print("Gold")
elif 0<b and a == 0:
    print("Silver")
else:
    print("Alloy")