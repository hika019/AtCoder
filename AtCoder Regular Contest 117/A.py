# -*- coding: utf-8 -*-
a, b = (int(x) for x in input().split())

ans = []

if a==b:
    for i in range(1, a+1):
        ans.append(i)
        ans.append(-i)
elif b<a:
    for i in range(1, a+1):
        ans.append(i+100000)
    
    ans_sum = sum(ans)
    
    for i in range(1,b):
        ans.append(-i)
    ans.append(0-sum(ans))

else:
    for i in range(1, b+1):
        ans.append(-i-100000)
    
    ans_sum = sum(ans)
    
    for i in range(1,a):
        ans.append(i)
    ans.append(abs(sum(ans)))
    


print(*ans)