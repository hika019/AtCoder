# -*- coding: utf-8 -*-
n, m = map(int, input().split())
a = list(map(int, input().split()))
b = list(map(int, input().split()))

a = list(set(a))
b = list(set(b))

a.sort()
b.sort()

end_flag = False
tmp = 10**9
start = 0

for i in a:
    mae = 10**9
    for j in range(start, len(b)):
        
        if tmp == 0:
            end_flag = True
            break
        
        if abs(i-b[j]) < tmp:
            tmp = abs(i-b[j])
            start = j
            
        if mae > abs(i-b[j]):
            mae = abs(i-b[j])
        else:
            break
        
    if end_flag:
        break

print(tmp)