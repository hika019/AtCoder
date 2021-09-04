# -*- coding: utf-8 -*-
import bisect

L, Q = map(int, input().split())


nagasa=[L]

ans = []

for i in range(Q):
    c, x = map(int, input().split())
    
    if(c == 1):
        nagasa.append(x)
        bisect.insort_left(nagasa, x)
        
    else:
        index = bisect.bisect_left(nagasa, x)
        if index != 0:
            ans.append(nagasa[index]-nagasa[index-1])
        else:
            ans.append(nagasa[index])

    
[print(i) for i in ans]