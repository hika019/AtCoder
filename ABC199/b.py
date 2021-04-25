# -*- coding: utf-8 -*

n = int(input())
a = list(map(int, input().split()))
b = list(map(int, input().split()))

hoge = [a[0], b[0]]

ans = 0
flag = 0


for i in range(1, n):
    if hoge[1] < a[i] or b[i] < hoge[0]:
        flag = 1
        break
    
    
    if hoge[0] <= a[i]:
        hoge[0] = a[i]

    
    if hoge[1] >= b[i]:
        hoge[1] = b[i]
    

    
    

if flag == 1:
    print(0)
else:
    print(hoge[1]-hoge[0]+1)
