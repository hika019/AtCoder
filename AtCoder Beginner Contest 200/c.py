# -*- coding: utf-8 -*-
import numpy as np
n = int(input())

tmp = list(map(int, input().split()))
tmp_np = np.array(tmp)

ans = 0

for i in range(1, int(n/2)):
    
    ans =ans + sum((tmp_np[i-1]-tmp_np[i:])%200==0)*2
    
    if any((tmp_np[i-1]-tmp_np[i:])%200==0) and i<n/2:
        ans =ans -1
        print(i)
    
    print((tmp_np[i-1]-tmp_np)%200==0)

print(ans)