# -*- coding: utf-8 -*-
import time
start = time.time()

s_i, s_j = map(int, input().split())

map_tile = []
map_score = []

n= 50
end = time.time()

for i in range(n):
    map_tile.append(list(map(int, input().split())))

for i in range(n):
    map_score.append(list(map(int, input().split())))

tootta = [map_tile[s_i][s_j]]
right_max = 0
left_max = 0
top_max = 0
bottom_max = 0

houkou = 0
"""
0:右
1:下
2:左
3:上
"""

ans = ""
flag = 1



while(end -start < 1.85):
    now = map_tile[s_i][s_j]
    
    if s_i+1 ==n :
        bottom_max = 1
    if s_j+1 ==n :
        right_max = 1
    if s_i-1 ==-1 :
        left_max = 1
    if s_i-1 ==-1 :
        top_max = 1
    
    
    if houkou*flag == 1 and right_max == 0:
        
        tmp = map_tile[s_i][s_j+1]
        
        if not(tmp in tootta):
            s_j += 1
            tootta.append(tmp)
            right_max = 0
            left_max = 0
            top_max = 0
            bottom_max = 0
            ans += "R"
        
        
        
        
    elif houkou == 2 and bottom_max == 0:
        
        tmp = map_tile[s_i+1][s_j]
        
        if not(tmp in tootta):
            s_i += 1
            tootta.append(tmp)
            right_max = 0
            left_max = 0
            top_max = 0
            bottom_max = 0
            ans += "D"
                
        
    elif houkou*flag == 3 and left_max == 0:
        
        tmp = map_tile[s_i][s_j-1]
        
        if not(tmp in tootta):
            s_j -= 1
            tootta.append(tmp)
            right_max = 0
            left_max = 0
            top_max = 0
            bottom_max = 0 
            ans += "L"
        
        
    elif houkou == 0 and top_max == 0:
        
        tmp = map_tile[s_i-1][s_j]
        
        if not(tmp in tootta):
            s_i -= 1
            tootta.append(tmp)
            right_max = 0
            left_max = 0
            top_max = 0
            bottom_max = 0 
            ans += "U"
            houkou = (houkou +1) %4
    else:
        break
    
    houkou = (houkou +1) %4
    end = time.time()
    
    
print(ans)
    
    
    