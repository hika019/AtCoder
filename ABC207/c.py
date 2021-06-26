# -*- coding: utf-8 -*-
import itertools






ans = 0

n = int(input())

a = []

for i in range(n):
    tmp = list(map(int, input().split()))
    if tmp[0] == 2:
        tmp[2] -= 0.5
    elif tmp[0] == 3:
        tmp[1] += 0.5
    elif tmp[0] == 4:
        tmp[1] += 0.5
        tmp[2] -= 0.5
    
    a.append(tmp)
    

con = list(range(n))

for con_index in itertools.combinations(con, 2):
    tmp1 = a[con_index[0]]
    tmp2 = a[con_index[1]]

    """
    if tmp1[1] > tmp2[1]:
        tmp = tmp1
        tmp1 = tmp2
        tmp2 = tmp
        
    #print(tmp1)
    #print(tmp2) 
    
    #tmp1[1] <= tmp2[1]
    flag_mae = 0
    flag_usiro = 0
    
    if tmp2[1] < tmp1[2] or (tmp2[1] == tmp1[2] and tmp1[0]%2 == 1 and tmp2[0] <3):
        flag_mae = 1
    
    
    if tmp1[2] < tmp2[2] or tmp1[2] > tmp2[2] or (tmp2[2] == tmp1[2] and tmp1[0]%2 == 1 and tmp2[0]%2 == 1):
        flag_usiro= 1
    
    if flag_mae == 1 and flag_usiro:
        ans +=1
    """
    
    if max(tmp1[1], tmp2[1]) <= min(tmp1[2], tmp[2]):
        ans += 1
        print(tmp1)
        print(tmp2)
        print()
        
    
print(ans)