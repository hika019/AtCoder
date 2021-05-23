# -*- coding: utf-8 -*-
 
 
def a_hoge(A):
    size = len(A)
    for i in range(size):
        A[i]+=max(A)
    print((A))
    
    
    
 
n = int(input())
 
A = list(map(int, input().split()))
k=1
 
mae = 0
for i in range(n):
     
    A[i]+=max(A[:k])
    
    hoge = sum(A[:k])
    
    print(hoge+mae)
    
    mae = hoge
    k+=1
 
 