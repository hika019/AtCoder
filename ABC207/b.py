# -*- coding: utf-8 -*-

import math
 
a, b, c, d = map(int, input().split())
 
ans = -1
 
 
i=0
 
if (c*d-b) <=0:
    i=-1
 
else:
    if a/(c*d-b) == 1:
        i=0
    else:
        i= math.ceil(a/(c*d-b))
 
print(i)