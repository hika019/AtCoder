# -*- coding: utf-8 -*-
import math

a, b, c = map(int, input().split())

z = math.gcd(a, math.gcd(b, c))

print(int(a/z)-1+int(b/z)-1+int(c/z)-1)

