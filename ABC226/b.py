n = int(input())

sum_list = {}
ans = 0

for i in range(n):
    hoge = input()
    
    if sum_list.get(hoge) == None:
        sum_list[hoge] = 1
        ans += 1
print(ans)
    
