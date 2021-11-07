# -*- coding: utf-8 -*-
n = int(input())

ans = 0

done = {}

lists = []


for i in range(n):
    hoge = list(map(int, input().split()))
    lists.append(hoge)
    
tmp = lists[-1]


def fuga(waza, ans):
    print(waza, ans)
    k = waza[1]
    
    if waza[1] == 0:
        print(waza[0])
        return waza[0]
   
    for i in range(waza[1]):
        a = waza[i+2]
        
        if done.get(a) == None:
            done[a] = 1
            return (ans += fuga(lists[a-1], ans))
        
    return ans
    

print(fuga(tmp, ans))

