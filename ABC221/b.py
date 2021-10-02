# -*- coding: utf-8 -*-
s = input()
t = input()

count = 0
j=0

for i in range(len(s)-1):
    if s[i+j] != t[i+j]:
        
        if s[i+1] == t[i] and s[i] == t[i+1]:
            
            count +=1
            
            if i+j+1 != len(s):
                j+=1
        else:
            count += 100

if count <=1:
    print("Yes")
else:
    print("No")