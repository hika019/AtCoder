# -*- coding: utf-8 -*-
ps = int(input())

x4= ps%10
x3= (ps%100-x4)
x2 =( ps%1000-x3-x4)
x1 =( ps%10000-x2-x3-x4)

x1 = x1/1000
x2 = x2 /100
x3 = x3/10

if x1 ==x2 == x3 == x4:
    print("Weak")

elif ((x1+1)%10 == x2) and ((x2+1)%10 == x3) and ((x3+1)%10 == x4):
    print("Weak")
else:
    print("Strong")