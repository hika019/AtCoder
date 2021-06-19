# -*- coding: utf-8 -*-

n = int(input())

a = list(map(int, input().split()))

num = []
a.sort()

mae = -1
for i in range(n):
    if a[i] != a[i-1]:
        num.append(a.count(a[i]))


sum = 0
for i in range(len(num)):
    sum += (n-num[i])*num[i]
    n-=num[i]
print(sum)