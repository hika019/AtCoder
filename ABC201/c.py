# -*- coding: utf-8 -*-
s = input()

if s.count("o") >=4:
    print(0)
    exit

if s.count("o") ==0:
    tmp = s.count("?")
    print(tmp**4)

if s.count("o") ==1:
    tmp = s.count("?")
    print((tmp+1)**4-tmp**4)
    
if s.count("o") ==2:
    tmp = s.count("?")
    print(2**4+14*tmp+16*tmp)
    
if s.count("o") ==3:
    tmp = s.count("?")
    print(24*3+(tmp+3)**2)
    
if s.count("o") ==4:
    print(4*3*2)
    


