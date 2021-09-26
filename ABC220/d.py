# -*- coding: utf-8 -*-
def tmp_fun(x, y, num):
    hoge = (x+y)%10
    fuga = (x*y)%10
    if(num == len(A)):
        ans[hoge] +=1
        ans[fuga] +=1
    else:

        return tmp_fun(hoge, A[num], num+1), tmp_fun(fuga, A[num], num+1)


n = int(input())
A = list(map(int, input().split()))

ans = [0]*10

tmp_fun(A[0], A[1], 2)

for i in range(10):
    print(ans[i])