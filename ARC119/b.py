# -*- coding: utf-8 -*-
import sys

def xor(a, b):
    ans = []
    for i in range(len(a)):
        if a[i] != b[i]:
            ans.append(1)
        else:
            ans.append(0)
    return ans


def cross(s, t, i):
    if s[i] == 1:
        for j in range(i, len(s)):
            if s[j] == 0:
                break
        tmp = s[i]
        s[i] = s[j]
        s[j] = tmp
        return s
    else:
        for j in range(i+1, len(s)):
            if s[j] == 1:
                j-=1
                break
        tmp = s[i]
        s[i] = s[j]
        s[j] = tmp
        return s


n = int(input())

s_str = input()
t_str = input()

s = []
t = []
for i in range(n):
    if s_str[i] == "1":
        s.append(1)
    else:
        s.append(0)
    if t_str[i] == "1":
        t.append(1)
    else:
        t.append(0)


ans = 0
if s == t:
    print(0)
    sys.exit()

if s.count(1) != t.count(1) or s.count(0) != t.count(0):
    print(-1)
    sys.exit()
    


while s != t:
    for i in range(len(s)):
        sa = xor(s, t)
        if sa[i] == 1:
            s = cross(s, t, i)
            ans += 1
print(ans)
        