# -*- coding: utf-8 -*-
N, M = (int(x) for x in input().split())
A = input().split()
B = input().split()

A_int = [int(x) for x in A]
B_int = [int(x) for x in B]


Z = []

for i in range(N):
    if not(A_int[i] in B_int):
        Z.append(A_int[i])
        
for i in range(M):
    if not(B_int[i] in A_int):
        Z.append(B_int[i])



ans = sorted(Z)

ans_str =""

for i in range(len(ans)):
    
    
    ans_str += str(ans[i])+" "
    
print(ans_str)

