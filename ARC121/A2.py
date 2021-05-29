# -*- coding: utf-8 -*-
def kyori(a, b):
    return max(abs(a[0]-b[0]), abs(a[1]-b[1]))

def kyori_i(a, b):
    return abs(a-b)

n = int(input())

x = []
y = []

for i in range(n):
    tmp= list(map(int, input().split()))
    x.append(tmp[0])
    y.append(tmp[1])
    
x.sort()
y.sort()

data = []
data_x = []
data_y = []

data_x.append(kyori_i(x[0], x[n-1]))
data_x.append(kyori_i(x[0], x[n-2]))
data_x.append(kyori_i(x[1], x[n-1]))

data_y.append(kyori_i(y[0], y[n-1]))
data_y.append(kyori_i(y[0], y[n-2]))
data_y.append(kyori_i(y[1], y[n-1]))

data_x.sort()
data_y.sort()

data += data_x
data += data_y

data.sort()
print(data[len(data)-2])