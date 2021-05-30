# -*- coding: utf-8 -*-
ans = 0
n, k = input().split()
for i in range(1, int(n)+1):
    for j in range(1, int(k)+1):
        room = i*100+j
        ans += room

print(ans)
        