# -*- coding: utf-8 -*-
k = int(input())
a, b = map(str, input().split())

a_ans = 0
for i in range(len(a)):
    tmp = int(a[-(i+1)])
    a_ans+=tmp*k**i

b_ans = 0
for i in range(len(b)):
    tmp = int(b[-(i+1)])
    b_ans+=tmp*k**i
    
    
print(a_ans*b_ans)