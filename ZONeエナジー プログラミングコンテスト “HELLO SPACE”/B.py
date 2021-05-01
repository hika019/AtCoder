# -*- coding: utf-8 -*-
N, D, H = map(int, input().split())
syougai = []

for i in range(N):
    tmp = list(map(int, input().split()))
    syougai.append(tmp)

ans = []
for i in range(N):
    data = syougai[i]
    a = (H-data[1])/(D-data[0])
    tmp = -a*data[0]+data[1]
    if tmp <0:
        tmp = 0
    ans.append(tmp)

print(max(ans))    