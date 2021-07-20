# -*- coding: utf-8 -*-

n = int(input())
s = input()

count = 0
for i in range(len(s)):
    if s[i] == "1":
        break

if i%2 == 0:
    print("Takahashi")
else:
    print("Aoki ")