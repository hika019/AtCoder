# -*- coding: utf-8 -*-
import math

def dai_sho(a, b):
    if a == b:
        print("=")
    elif a>b:
        print(">")
    else:
        print("<")

a, b, c = map(int, input().split())


if a == b:
    print("=")
    
    
elif abs(a) == abs(b):
    if c%2 == 0:
        dai_sho(abs(a), abs(b))
    else:
        dai_sho(a, b)

else:
    if c%2 == 0:
        dai_sho(abs(a), abs(b))
    else:
        dai_sho(a, b)
            
