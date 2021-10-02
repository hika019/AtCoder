# -*- coding: utf-8 -*-
n = input()

a = 0
b = 0



flag = False
count = 0
zero = 0

while(1):
    mini = int(min(n))
    if mini != 0:
        break
    
    index = n.index(str(mini))
    start = n[:index]
    end = n[index+1:]
    n = start + end
    zero += 1

if len(n)%2 == 0:
    count = 1

for i in range(len(n)):
    mini = int(min(n))
    if flag:
        a += int(mini)*10**(len(str(a)))
    else:
        b += int(mini)*10**(len(str(b)))
    
    count +=1
    if count %2 == 0:
        flag = not(flag)
    
    index = n.index(str(mini))
    start = n[:index]
    end = n[index+1:]
    n = start + end
    

print(int(a/10*b/10)*10**zero)

    