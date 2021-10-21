# -*- coding: utf-8 -*-

def migi(s):
    tmp = s[-1]
    for i in range(0, len(s)-1):
        tmp += s[i]
    return tmp

        

s = input()

hoge = []
for i in range(len(s)):
    
    s = migi(s)
    hoge.append(s)

print(min(hoge))
print(max(hoge))