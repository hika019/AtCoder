# -*- coding: utf-8 -*-
n = int(input())
s  = list(input())
q = int(input())

q_list = []
count = 0



for i in range(q):
    tmp = (list(map(int, input().split())))
    
    if tmp[0] == 2:
        count = (count+1)%2
    else:
        str_hoge = s[tmp[1]-1]
        s[tmp[1]-1] = s[tmp[2]-1]
        s[tmp[2]-1] = str_hoge
    

if count == 1:
        str_hoge = s[0:n]
        s[0:n] = s[n:]
        s[n:] = str_hoge



print(*s, sep="")