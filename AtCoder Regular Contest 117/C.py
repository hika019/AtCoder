# -*- coding: utf-8 -*-

def cheack(color0, color1):
    
    
    ori_lists = ["B", "W", "R"]
    
    lists = ori_lists
    
    if color0 == color1:
        return color0
    else:
        ori_lists.remove(color0) 
        ori_lists.remove(color1)
        return ori_lists[0]
        


n = int(input())
hoge = input()


tmp = ""
while len(hoge) != 1:
    for i in range(1, len(hoge)):
        tmp += (cheack(hoge[i-1], hoge[i]))
    hoge = tmp
    tmp = ""

print(hoge[0])
